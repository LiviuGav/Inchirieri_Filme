#include <msclr/marshal_cppstd.h>
#include "Film.h"
#include "Asteptare.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace System::IO;
using namespace System::Windows::Forms;
namespace Interfataclr {
    // Constructor
    Film::Film(int id, String^ titlu, String^ gen, String^ regizor, int anulLansarii, int stocDisponibil, double pretInchiriere)
        : ID(id), Titlu(titlu), Gen(gen), Regizor(regizor), AnulLansarii(anulLansarii), StocDisponibil(stocDisponibil), PretInchiriere(pretInchiriere)
    {
    }

    // Metodă pentru a adăuga filmul în fișier
    void Film::AdaugaFilm(Film^ film)
    {
        if (film->StocDisponibil < 0 || film->PretInchiriere < 0) {
            MessageBox::Show("Date invalide.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        try {
            StreamWriter^ scriitor = gcnew StreamWriter("Filme.txt", true);
            scriitor->WriteLine(film->ID + "," + film->Titlu + "," + film->Gen + "," + film->Regizor + "," + film->AnulLansarii + "," + film->StocDisponibil + "," + film->PretInchiriere);
            scriitor->Close();

            MessageBox::Show("Film adaugat cu succes!", "Succes", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ ex) {
            MessageBox::Show("A aparut o eroare: " + ex->Message, "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    // Metodă pentru a modifica datele filmului
    void Film::ModificaFilm(int id, String^ titlu, String^ gen, String^ regizor, int anulLansarii, int stocDisponibil, double pretInchiriere)
    {
        if (stocDisponibil < 0 || pretInchiriere < 0) {
            MessageBox::Show("Date invalide.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        // Citirea din fișier și actualizarea datelor filmului cu ID-ul specificat
        try
        {
            // Deschide fișierul pentru citire
            StreamReader^ cititor = gcnew StreamReader("Filme.txt");
            // Creează un stream pentru scriere temporar
            StreamWriter^ tempScriitor = gcnew StreamWriter("TempFilme.txt");

            String^ line;
            while ((line = cititor->ReadLine()) != nullptr)
            {
                array<String^>^ parts = line->Split(',');

                // Dacă ID-ul filmului din linia curentă este același cu ID-ul specificat, actualizează datele filmului
                if (parts[0] == id.ToString())
                {
                    // Actualizează datele filmului cu noile valori
                    tempScriitor->WriteLine(id + "," + titlu + "," + gen + "," + regizor + "," + anulLansarii + "," + stocDisponibil + "," + pretInchiriere);
                }
                else
                {
                    // Dacă ID-ul filmului nu coincide, copiază linia în fișierul temporar
                    tempScriitor->WriteLine(line);
                }
            }

            // Închide fișierele
            cititor->Close();
            tempScriitor->Close();

            // Șterge fișierul original
            File::Delete("Filme.txt");
            // Redenumește fișierul temporar în cel original
            File::Move("TempFilme.txt", "Filme.txt");

            // Afișare mesaj de confirmare
            MessageBox::Show("Datele filmului au fost modificate cu succes!", "Succes", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ e)
        {
            Console::WriteLine("Eroare la modificarea datelor filmului: " + e->Message);
        }
    }
    void Film::UpdateStocInFisier(Film^ film) {
        // Deschidem fișierul pentru citire și scriere
        std::ifstream fisierIn("Filme.txt");
        std::ofstream fisierOut("Filme_temp.txt");

        if (!fisierIn || !fisierOut) {
            // Nu s-a putut deschide unul dintre fișiere
            MessageBox::Show("Eroare: Nu s-a putut deschide fișierul Filme.txt sau Filme_temp.txt.");
            return;
        }

        std::string linie;
        while (std::getline(fisierIn, linie)) {
            // Parsăm linia pentru a extrage id-ul și stocul
            std::stringstream ss(linie);
            std::string id, titlu, gen, regizor, anulLansarii, stoc, pret;
            std::getline(ss, id, ',');
            std::getline(ss, titlu, ',');
            std::getline(ss, gen, ',');
            std::getline(ss, regizor, ',');
            std::getline(ss, anulLansarii, ',');
            std::getline(ss, stoc, ',');
            std::getline(ss, pret, ',');

            // Convertim id-ul și stocul în întregi
            int idFilm = std::stoi(id);
            int stocFilm = std::stoi(stoc);

            // Verificăm dacă id-ul filmului corespunde cu cel al filmului selectat
            if (idFilm == film->GetID()) {
                // Actualizăm stocul filmului
                stocFilm--;

                // Scriem noua linie în fișierul de ieșire cu stocul actualizat
                fisierOut << idFilm << "," << titlu << "," << gen << "," << regizor << "," << anulLansarii << "," << stocFilm << "," << pret << std::endl;
            }
            else {
                // Păstrăm linia nemodificată în fișierul de ieșire
                fisierOut << linie << std::endl;
            }
        }

        // Închidem ambele fișiere
        fisierIn.close();
        fisierOut.close();

        // Ștergem fișierul original
        std::remove("Filme.txt");

        // Redenumim fișierul temporar în fișierul original
        std::rename("Filme_temp.txt", "Filme.txt");
    }
    void Film::VerificareAsteptare(String^ filmselectat, String^ regizorFilm,int stoc)
    {
        // Deschidem fișierul pentru citire și scriere
        std::ifstream fisierIn("Lista_Asteptare.txt");
        Asteptare^ lista = gcnew Asteptare();

        bool este = false;
        if (!fisierIn) {
            // Nu s-a putut deschide unul dintre fișiere
            MessageBox::Show("Eroare: Nu s-a putut deschide fișierul Filme.txt sau Filme_temp.txt.");
            return;
        }

        std::string linie;
        while (std::getline(fisierIn, linie)) {
            // Parsăm linia pentru a extrage id-ul și stocul
            std::stringstream ss(linie);
            std::string nume, Film, regizor, telefon , email;
            std::getline(ss, nume, ',');
            std::getline(ss, Film, ',');
            std::getline(ss, regizor, ',');
            std::getline(ss, telefon, ',');
            std::getline(ss, email, ',');
            
            System::String^ numeFilmtrim = msclr::interop::marshal_as<System::String^>(Film)->Trim();
            System::String^ Regizortrim = msclr::interop::marshal_as<System::String^>(regizor)->Trim();
      

            // Verificăm dacă id-ul filmului corespunde cu cel al filmului selectat
            if (numeFilmtrim == filmselectat && Regizortrim == regizorFilm && stoc > 0) {

                
                este = true;
                // Construim o reprezentare comprehensivă a filmului
                String^ rezultat = gcnew String(nume.c_str()) + ", " + gcnew String(Film.c_str()) + ", " + gcnew String(regizor.c_str()) + ", " + gcnew String(telefon.c_str()) + ", " + gcnew String(email.c_str());


                // Adăugăm reprezentarea filmului în ListBox
                lista->ListBox(rezultat);
                lista->Lista(false);

            }
        }
        if (este)
        {
            MessageBox::Show("Sunt persoane in asteptare pentru acest film!");
            lista->ShowDialog();
        }
        

        // Închidem ambele fișiere
        fisierIn.close();

    }

    void Film::StergereAsteptare(String^ filmselectat, String^ regizorFilm, String^ client, String^ emailComplet)
    {
       
        std::ifstream fisierIn("Lista_Asteptare.txt");
        std::ofstream fisierOut("Lista.txt");

        if (!fisierIn || !fisierOut) {
           
            MessageBox::Show("Eroare: Nu s-a putut deschide fișierul Filme.txt sau Filme_temp.txt.");
            return;
        }

        std::string linie;
        while (std::getline(fisierIn, linie)) {
          
            std::stringstream ss(linie);
            std::string nume, Film, regizor, telefon, email;
            std::getline(ss, nume, ',');
            std::getline(ss, Film, ',');
            std::getline(ss, regizor, ',');
            std::getline(ss, telefon, ',');
            std::getline(ss, email, ',');

            System::String^ numeFilmtrim = msclr::interop::marshal_as<System::String^>(Film)->Trim();
            System::String^ Regizortrim = msclr::interop::marshal_as<System::String^>(regizor)->Trim();
            System::String^ Clienttrim = msclr::interop::marshal_as<System::String^>(nume)->Trim();
            System::String^ Emailtrim = msclr::interop::marshal_as<System::String^>(email)->Trim();
           

            if (numeFilmtrim == filmselectat && Regizortrim == regizorFilm && Clienttrim==client && Emailtrim==emailComplet) {
            
            }
            else {
            
                fisierOut << linie << std::endl;
            }
        }

     
        fisierIn.close();
        fisierOut.close();

     
        std::remove("Lista_Asteptare.txt");

      
        std::rename("Lista.txt", "Lista_Asteptare.txt");
    }
}
