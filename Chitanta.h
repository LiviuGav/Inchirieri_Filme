#pragma once
#include <string>
#include <fstream>
#include <cstdlib> // pentru funcția system()

class Chitanta {
private:
    std::string nume;
    std::string film;
    std::string regizor;
    std::string dateInchiriere;
    std::string dataEmiterii;
    double sumaPlatita;
    std::string modalitatePlata;

public:
    Chitanta(const std::string& Nume ,const std::string& Film,const std::string& Regizor,const std::string& dateInchiriere, const std::string& dataEmiterii, double sumaPlatita, const std::string& modalitatePlata)
        : nume(Nume),film(Film),regizor(Regizor),dateInchiriere(dateInchiriere), dataEmiterii(dataEmiterii), sumaPlatita(sumaPlatita), modalitatePlata(modalitatePlata) {}

    void SalvareChitantaInFisier(const std::string& numeFisier) {
        std::ofstream fisier(numeFisier, std::ios::out); 
        if (fisier.is_open()) {
            fisier << "Nume client: " << nume << std::endl;
            fisier << "Nume film: " << film << std::endl;
            fisier << "Regizor: " << regizor << std::endl;
            fisier << "Data Inchirierii: " << dateInchiriere << std::endl;
            fisier << "Data emiterii: " << dataEmiterii << std::endl;
            fisier << "Suma platita(RON): " << sumaPlatita << std::endl;
            fisier << "Modalitate plata: " << modalitatePlata << std::endl;
            fisier << "-----------------------------" << std::endl;
            fisier.close();

            // Deschidem fisierul folosind Notepad
            std::string command = "notepad.exe " + numeFisier;
            system(command.c_str());
        }
        
    }
};
