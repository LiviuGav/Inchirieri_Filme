#include "Inchiriere.h"
#include <fstream>
#include <sstream>
#include <iomanip>
double Inchiriere::CalculeazaCostTotal() const {
    //datele sunt în formatul YYYY-MM-DD
    std::tm start = {};
    std::tm end = {};
    std::istringstream ssStart(dataInceperii);
    std::istringstream ssEnd(dataSfarsit);
    ssStart >> std::get_time(&start, "%Y-%m-%d");
    ssEnd >> std::get_time(&end, "%Y-%m-%d");

    std::time_t start_time = std::mktime(&start);
    std::time_t end_time = std::mktime(&end);

 
    int luni = -1;
    if (start_time != -1 && end_time != -1) {
        std::tm temp = *std::localtime(&start_time);
        while (std::mktime(&temp) <= end_time) {
            ++luni;
            ++temp.tm_mon;
            if (temp.tm_mon == 12) {
                ++temp.tm_year;
                temp.tm_mon = 0;
            }
        }
    }

   
    double cost_total = luni * pret;

    return cost_total;
}



std::string Inchiriere::GetInfoInchiriere() const {
    std::ostringstream oss;
    oss << "ID Inchiriere: " << idInchiriere << "\n"
        << "Client: " << numeClient << " " << prenumeClient << "\n"
        << "Telefon: " << telefonClient << "\n"
        << "Email: " << emailClient << "\n"
        << "Adresa: " << adresaClient << "\n"
        << "Film: " << titluFilm << "\n"
        << "Regizor: " << regizor << "\n"
        << "Data inceperii: " << dataInceperii << "\n"
        << "Data sfarsit: " << dataSfarsit << "\n"
        << "Pret total: " << CalculeazaCostTotal() << "\n";
    return oss.str();
}

void Inchiriere::SalveazaInchiriere() const {
    std::ofstream file("Inchirieri.txt", std::ios::app);
    if (file.is_open()) {
        file << GetInfoInchiriere();
        file.close();
    }
}

bool Inchiriere::CautaInchiriere(const std::string& numeClient, const std::string& numeFilm) {
    std::ifstream fisier("Inchirieri.txt");
    std::string linie;
    bool gasit = false;

    while (std::getline(fisier, linie)) {
       
        if (linie.find("ID Inchiriere") != std::string::npos) {
           
            std::getline(fisier, linie);
          
            if (linie.find("Client: " + numeClient) != std::string::npos) {
              
                for (int i = 0; i < 4; ++i) {
                    std::getline(fisier, linie);
                }
              
                if (linie.find("Film: " + numeFilm) != std::string::npos) {
                    gasit = true;
                    break; 
                }
            }
        }
    }

    fisier.close();
    return gasit;
}

