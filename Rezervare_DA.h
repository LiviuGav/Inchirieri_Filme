#pragma once

#pragma once

#include <msclr/marshal_cppstd.h>
#include "RezervareInchiriere.h"
#include "Chitanta.h"
#include "Inchiriere.h"
#include <fstream>
#include "algorithm"
#include <vector>
#include <sstream>
#include <string>


namespace Interfataclr {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Rezervare_DA : public System::Windows::Forms::Form
    {
    public:
        Rezervare_DA(String^ numeClient, String^ numeFilm) : numeClientStr(numeClient), numeFilmStr(numeFilm)
        {
            
            InitializeComponent();
        }

        void Inchiriereform(bool isVisible,String^ client, String^ film)
        {
            label3->Visible = isVisible;
            label4->Visible = isVisible;
            button2->Visible = isVisible;
            button3->Visible = isVisible;
            label1->Visible = !isVisible;
            label2->Visible = !isVisible;
            buttonAnul->Visible = !isVisible;
            buttonConf->Visible = !isVisible;
            listBoxRezultate->Visible = isVisible; // Face listBox-ul vizibil
            AfisareClientiInc(client,film);
            

        }
        void Rezervareform(bool isVisible, String^ client, String^ film)
        {
            listBoxRezultate->Visible = isVisible; // Face listBox-ul vizibil
            AfisareClientiRez(client, film);


        }
        
    protected:
        ~Rezervare_DA()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ buttonAnul;
    private: System::Windows::Forms::Button^ buttonConf;
    private:
     String^ numeClientStr;
    String^ numeFilmStr;
    String^ Email;
    String^ Regizor;
    array<String^>^ date;
   

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;

    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::ListBox^ listBoxRezultate;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;



        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->buttonAnul = (gcnew System::Windows::Forms::Button());
            this->buttonConf = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->listBoxRezultate = (gcnew System::Windows::Forms::ListBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::SystemColors::Window;
            this->label1->Location = System::Drawing::Point(581, 27);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(156, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Rezervarea a fost gasita!";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::Window;
            this->label2->Location = System::Drawing::Point(640, 64);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(141, 16);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Ce doriti in continuare\?";
            // 
            // buttonAnul
            // 
            this->buttonAnul->Location = System::Drawing::Point(584, 106);
            this->buttonAnul->Name = L"buttonAnul";
            this->buttonAnul->Size = System::Drawing::Size(149, 23);
            this->buttonAnul->TabIndex = 2;
            this->buttonAnul->Text = L"Anulare rezervare";
            this->buttonAnul->UseVisualStyleBackColor = true;
            this->buttonAnul->Click += gcnew System::EventHandler(this, &Rezervare_DA::buttonAnul_Click);
            // 
            // buttonConf
            // 
            this->buttonConf->Location = System::Drawing::Point(584, 179);
            this->buttonConf->Name = L"buttonConf";
            this->buttonConf->Size = System::Drawing::Size(149, 23);
            this->buttonConf->TabIndex = 3;
            this->buttonConf->Text = L"Confirmare inchiriere";
            this->buttonConf->UseVisualStyleBackColor = true;
            this->buttonConf->Click += gcnew System::EventHandler(this, &Rezervare_DA::buttonConf_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::SystemColors::Window;
            this->label3->Location = System::Drawing::Point(581, 27);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(142, 16);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Au fost gasite inchirieri!";
            this->label3->Visible = false;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::SystemColors::Window;
            this->label4->Location = System::Drawing::Point(532, 64);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(287, 16);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Selectati inchirieria pe care o doriti sa o stergeti";
            this->label4->Visible = false;
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(766, 142);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(75, 23);
            this->button3->TabIndex = 8;
            this->button3->Text = L"Anulare";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Visible = false;
            this->button3->Click += gcnew System::EventHandler(this, &Rezervare_DA::button3_Click);
            // 
            // listBoxRezultate
            // 
            this->listBoxRezultate->BackColor = System::Drawing::SystemColors::Window;
            this->listBoxRezultate->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->listBoxRezultate->FormattingEnabled = true;
            this->listBoxRezultate->ItemHeight = 16;
            this->listBoxRezultate->Location = System::Drawing::Point(-1, 245);
            this->listBoxRezultate->Margin = System::Windows::Forms::Padding(4);
            this->listBoxRezultate->Name = L"listBoxRezultate";
            this->listBoxRezultate->Size = System::Drawing::Size(1489, 384);
            this->listBoxRezultate->TabIndex = 9;
            this->listBoxRezultate->Visible = false;
            this->listBoxRezultate->SelectedIndexChanged += gcnew System::EventHandler(this, &Rezervare_DA::listBoxRezultate_SelectedIndexChanged);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(480, 142);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(81, 23);
            this->button2->TabIndex = 10;
            this->button2->Text = L"Confirmare";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Visible = false;
            this->button2->Click += gcnew System::EventHandler(this, &Rezervare_DA::button2_Click_1);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
            this->pictureBox1->Location = System::Drawing::Point(-10, -1);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(1342, 501);
            this->pictureBox1->TabIndex = 11;
            this->pictureBox1->TabStop = false;
            // 
            // Rezervare_DA
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1326, 618);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->listBoxRezultate);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->buttonConf);
            this->Controls->Add(this->buttonAnul);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox1);
            this->Name = L"Rezervare_DA";
            this->Text = L"Rezervare_DA";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:


        void AfisareClientiRez(System::String^ numeClient, System::String^ numeFilm){
           
            std::ifstream fisierIn("Rezervari.txt");

            if (!fisierIn.is_open()) {
                System::Console::WriteLine("Eroare la deschiderea fisierelor!");
                return;
            }

            std::string linie;
            std::string clientStr = msclr::interop::marshal_as<std::string>(numeClient);
            std::string filmStr = msclr::interop::marshal_as<std::string>(numeFilm);


            while (std::getline(fisierIn, linie)) {
                if (linie.find("ID Rezervare: ") == 0) {
                    std::string id = linie; // Stocheaza linia "ID Inchiriere: "
                    std::getline(fisierIn, linie); // Citeste linia "Client: "
                    std::string currentClient = linie.substr(8); // Extrage numele clientului
                    std::string clientLine = linie; // Stocheaza linia "Client: "
                    std::getline(fisierIn, linie); // Citeste linia "Telefon: "
                    std::string telefonLine = linie;
                    std::getline(fisierIn, linie); // Citeste linia "Email: "
                    std::string emailLine = linie;
                    std::getline(fisierIn, linie); // Citeste linia "Adresa: "
                    std::string adresaLine = linie;
                    std::getline(fisierIn, linie); // Citeste linia "Film: "
                    std::string currentFilm = linie.substr(6); // Extrage numele filmului
                    std::string filmLine = linie; // Stocheaza linia "Film: "
                    std::getline(fisierIn, linie); // Citeste linia "Regizor: "
                    std::string regizorLine = linie;
                    std::getline(fisierIn, linie); // Citeste linia "Data inceperii: "
                    std::string dataInceperiiLine = linie;
                    std::getline(fisierIn, linie); // Citeste linia "Data sfarsit: "
                    std::string dataSfarsitLine = linie;
                    std::getline(fisierIn, linie); // Citeste linia "Pret total: "
                    std::string sumaPlatita = linie;

                    if (currentClient == clientStr && currentFilm == filmStr) {

                   
                        String^ rezultat = gcnew String(id.c_str()) + ", "+ gcnew String(clientLine.c_str()) + ", "+ gcnew String(emailLine.c_str()) + ", " + gcnew String(adresaLine.c_str()) + ", " + gcnew String(filmLine.c_str()) + ", " +
                            gcnew String(regizorLine.c_str()) + ", " + gcnew String(dataInceperiiLine.c_str()) + ", " +  gcnew String(dataSfarsitLine.c_str()) + ", " + gcnew String(sumaPlatita.c_str());

                        listBoxRezultate->Items->Add(rezultat);
                    }
                }
            }
            fisierIn.close();
        }

        void AfisareClientiInc(System::String^ numeClient, System::String^ numeFilm) {

            std::ifstream fisierIn("Inchirieri.txt");

            if (!fisierIn.is_open()) {
                System::Console::WriteLine("Eroare la deschiderea fisierelor!");
                return;
            }
            listBoxRezultate->Items->Clear(); 

            std::string linie;
            std::string clientStr = msclr::interop::marshal_as<std::string>(numeClient);
            std::string filmStr = msclr::interop::marshal_as<std::string>(numeFilm);



            while (std::getline(fisierIn, linie)) {
                if (linie.find("ID Inchiriere: ") == 0) {
                    std::string id = linie; 
                    std::getline(fisierIn, linie); 
                    std::string currentClient = linie.substr(8); 
                    std::string clientLine = linie;
                    std::getline(fisierIn, linie);
                    std::string telefonLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string emailLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string adresaLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string currentFilm = linie.substr(6); 
                    std::string filmLine = linie; 
                    std::getline(fisierIn, linie); 
                    std::string regizorLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string dataInceperiiLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string dataSfarsitLine = linie;
                    std::getline(fisierIn, linie);
                    std::string sumaPlatita = linie;

                    System::String^ numeFilmtrim = msclr::interop::marshal_as<System::String^>(currentFilm)->Trim();
                    System::String^ Filmtrim = msclr::interop::marshal_as<System::String^>(filmStr)->Trim();
                    System::String^ numeClienttrim = msclr::interop::marshal_as<System::String^>(currentClient)->Trim();
                    System::String^ Clienttrim = msclr::interop::marshal_as<System::String^>(clientStr)->Trim();

                    if (numeClienttrim == Clienttrim && numeFilmtrim == Filmtrim) {
                        
                        String^ rezultat = gcnew String(id.c_str()) +", "+ gcnew String(clientLine.c_str()) + ", "  + gcnew String(emailLine.c_str()) + ", " + gcnew String(adresaLine.c_str()) + ", " + gcnew String(filmLine.c_str()) 
                            +", " + gcnew String(regizorLine.c_str()) + ", " + gcnew String(dataInceperiiLine.c_str()) + ", " + gcnew String(dataSfarsitLine.c_str()) + ", " + gcnew String(sumaPlatita.c_str());
                            

                                listBoxRezultate->Items->Add(rezultat);
                    }
                    
                }
            }
            fisierIn.close();
        }
        System::Void listBoxRezultate_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            if (listBoxRezultate->SelectedIndex != -1) {
            
                String^ selectedItem = listBoxRezultate->SelectedItem->ToString();

                 date = selectedItem->Split(gcnew array<wchar_t>{ ':', ',' }, StringSplitOptions::RemoveEmptyEntries);

                try {
        
                    Email = date[5]->Trim();
                    Regizor = date[11]->Trim();

                }
                catch (FormatException^ ex) {
      
                    MessageBox::Show("Eroare: Datele filmului selectat nu sunt într-un format corect.");
                }
            }
        }
        void CitireRezervare(System::String^ numeClient, System::String^ numeFilm, System::String^ email, System::String^ Regizor)
        {
            std::ifstream fisierIn("Rezervari.txt");

            if (!fisierIn.is_open()) {
                System::Console::WriteLine("Eroare la deschiderea fisierelor!");
                return;
            }

            std::string linie;
            std::string clientStr = msclr::interop::marshal_as<std::string>(numeClient);
            std::string filmStr = msclr::interop::marshal_as<std::string>(numeFilm);
            std::string emailStr = msclr::interop::marshal_as<std::string>(email);
            std::string regizorStr = msclr::interop::marshal_as<std::string>(Regizor);
          

            while (std::getline(fisierIn, linie)) {
                if (linie.find("ID Rezervare: ") == 0) {
                    std::string idRezervare = linie;
                    std::getline(fisierIn, linie); 
                    std::string currentClient = linie.substr(8); 
                    std::string clientLine = linie; 
                    std::getline(fisierIn, linie); 
                    std::string telefonLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string currentmail = linie.substr(7);
                    std::string emailLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string adresaLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string currentFilm = linie.substr(6); 
                    std::string filmLine = linie; 
                    std::getline(fisierIn, linie); 
                    std::string RegizorFilm = linie.substr(9);
                    std::string regizorLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string dataInceperiiLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string dataSfarsitLine = linie;
                    std::getline(fisierIn, linie);
                    std::string sumaPlatita = linie;

                    System::String^ Emailtrim = msclr::interop::marshal_as<System::String^>(currentmail)->Trim();
                    System::String^ numeEmailtrim = msclr::interop::marshal_as<System::String^>(emailStr)->Trim();
                    System::String^ Regizortrim = msclr::interop::marshal_as<System::String^>(regizorStr)->Trim();
                    System::String^ regizortrim = msclr::interop::marshal_as<System::String^>(RegizorFilm)->Trim();

                    if (currentClient == clientStr && currentFilm == filmStr && Emailtrim == numeEmailtrim && Regizortrim == regizortrim) {

                      
                        System::String^ idRezervareCLI = gcnew System::String(idRezervare.c_str());
                        idRezervareCLI = idRezervareCLI->Substring(idRezervareCLI->IndexOf(':') + 1);

                        System::String^ clientCLI = gcnew System::String(clientLine.c_str());
                        clientCLI = clientCLI->Substring(clientCLI->IndexOf(':') + 2);

                        System::String^ telefonCLI = gcnew System::String(telefonLine.c_str());
                        telefonCLI = telefonCLI->Substring(telefonCLI->IndexOf(':') + 1);

                        System::String^ emailCLI = gcnew System::String(emailLine.c_str());
                        emailCLI = emailCLI->Substring(emailCLI->IndexOf(':') + 1);

                        System::String^ adresaCLI = gcnew System::String(adresaLine.c_str());
                        adresaCLI = adresaCLI->Substring(adresaCLI->IndexOf(':') + 1);

                        System::String^ filmCLI = gcnew System::String(filmLine.c_str());
                        filmCLI = filmCLI->Substring(filmCLI->IndexOf(':') + 1);

                        System::String^ regizorCLI = gcnew System::String(regizorLine.c_str());
                        regizorCLI = regizorCLI->Substring(regizorCLI->IndexOf(':') + 1);

                        System::String^ dataInceperiiCLI = gcnew System::String(dataInceperiiLine.c_str());
                        dataInceperiiCLI = dataInceperiiCLI->Substring(dataInceperiiCLI->IndexOf(':') + 1);

                        System::String^ dataSfarsitCLI = gcnew System::String(dataSfarsitLine.c_str());
                        dataSfarsitCLI = dataSfarsitCLI->Substring(dataSfarsitCLI->IndexOf(':') + 1);

                        System::String^ sumaPlatitaCLI = gcnew System::String(sumaPlatita.c_str());
                        sumaPlatitaCLI = sumaPlatitaCLI->Substring(sumaPlatitaCLI->IndexOf(':') + 1);


                        System::String^ genCLI = "";
                        
                        System::String^ anCLI = "";
                        System::String^ stoc = "";
                        System::String^ pret = "";

                       
                        int anInceput, lunaInceput, ziInceput;
                        int anSfarsit, lunaSfarsit, ziSfarsit;

                        sscanf(dataInceperiiLine.c_str(), "Data inceperii: %d-%d-%d", &anInceput, &lunaInceput, &ziInceput);
                        sscanf(dataSfarsitLine.c_str(), "Data sfarsit: %d-%d-%d", &anSfarsit, &lunaSfarsit, &ziSfarsit);

                        
                        System::String^ anInceputCLI = anInceput.ToString();
                        System::String^ lunaInceputCLI = lunaInceput.ToString();
                        System::String^ ziInceputCLI = ziInceput.ToString();

                        System::String^ anSfarsitCLI = anSfarsit.ToString();
                        System::String^ lunaSfarsitCLI = lunaSfarsit.ToString();
                        System::String^ ziSfarsitCLI = ziSfarsit.ToString();

                        int selectedYear = Int32::Parse(anInceputCLI);
                        int selectedMonth = Int32::Parse(lunaInceputCLI);
                        int selectedDay = Int32::Parse(ziInceputCLI);
                        DateTime selectedDate(selectedYear, selectedMonth, selectedDay);

                        if (selectedDate <= DateTime::Now.Date.AddDays(3))
                        {
                            MessageBox::Show("Data de astazi este prea aproape de perioada de incheiere. Din nefericire vom anula rezervarea", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
                            this->ActualizeazaStocFilm(numeFilmStr, Regizor);
                            buttonConf->Visible = false;
                            label1->Visible = false;
                            label2->Visible = false;


                        }
                        else
                        {
                           
                            std::ifstream fisierFilme("Filme.txt");
                            std::string linie;
                            while (std::getline(fisierFilme, linie)) {
                                std::stringstream ss(linie);
                                std::string id, numeFilm, gen, regizor, an, stocFilm, pretFilm;
                                std::getline(ss, id, ',');
                                std::getline(ss, numeFilm, ',');
                                std::getline(ss, gen, ',');
                                std::getline(ss, regizor, ',');
                                std::getline(ss, an, ',');
                                std::getline(ss, stocFilm, ',');
                                std::getline(ss, pretFilm, ',');
                               
                                System::String^ numeFilmtrim = msclr::interop::marshal_as<System::String^>(numeFilm)->Trim();
                                System::String^ filmCLItrim = filmCLI->Trim();
                                System::String^ Regizortrim = msclr::interop::marshal_as<System::String^>(regizor)->Trim();
                                System::String^ regizorCLItrim = regizorCLI->Trim();
                                
                                if (numeFilmtrim==filmCLItrim && Regizortrim==regizorCLItrim) {
                                    
                                    System::String^ idCLI = gcnew System::String(id.c_str());
                                    System::String^ numeFilmCLI = gcnew System::String(numeFilm.c_str());
                                    System::String^ genFilmCLI = gcnew System::String(gen.c_str());
                                    System::String^ regizorFilmCLI = gcnew System::String(regizor.c_str());
                                    System::String^ anFilmCLI = gcnew System::String(an.c_str());
                                    System::String^ stocFilmCLI = gcnew System::String(stocFilm.c_str());
                                    System::String^ pretFilmCLI = gcnew System::String(pretFilm.c_str());

                                    
                                    RezervareInchiriere^ formularInchiriere = gcnew RezervareInchiriere(idCLI, numeFilmCLI, genFilmCLI, regizorFilmCLI, anFilmCLI, stocFilmCLI, pretFilmCLI);
                                    formularInchiriere->RezervareInchiriereExtra(clientCLI, anInceputCLI, lunaInceputCLI, ziInceputCLI, anSfarsitCLI, lunaSfarsitCLI, ziSfarsitCLI, telefonCLI, emailCLI, adresaCLI, sumaPlatitaCLI);
                                    formularInchiriere->ShowDialog();
                                    break;
                                }
                               
                            }

                            

                        }

                    }
                }

            }   
           
                
                   
            
               
        

            fisierIn.close();
            

            
            
    }
        void StergeRezervareDinFisier(System::String^ numeClient, System::String^ numeFilm, System::String^ email, System::String^ regizor) {
            std::ifstream fisierIn("Rezervari.txt");
            std::ofstream fisierOut("Rezervari_temp.txt");

            if (!fisierIn.is_open() || !fisierOut.is_open()) {
                System::Console::WriteLine("Eroare la deschiderea fisierelor!");
                return;
            }

            std::string linie;
            std::string clientStr = msclr::interop::marshal_as<std::string>(numeClient);
            std::string filmStr = msclr::interop::marshal_as<std::string>(numeFilm);
            std::string emailStr = msclr::interop::marshal_as<std::string>(email);
            std::string regizorStr = msclr::interop::marshal_as<std::string>(regizor);
            bool skipBlock = false;

            while (std::getline(fisierIn, linie)) {
                if (linie.find("ID Rezervare: ") == 0) {
                    std::string idRezervare = linie; 
                    std::getline(fisierIn, linie); 
                    std::string currentClient = linie.substr(8); 
                    std::string clientLine = linie; 
                    std::getline(fisierIn, linie); 
                    std::string telefonLine = linie;
                    std::getline(fisierIn, linie);
                    std::string currentmail = linie.substr(7);
                    std::string emailLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string adresaLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string currentFilm = linie.substr(6); 
                    std::string filmLine = linie; 
                    std::getline(fisierIn, linie); 
                    std::string RegizorFilm = linie.substr(9);
                    std::string regizorLine = linie;
                    std::getline(fisierIn, linie);
                    std::string dataInceperiiLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string dataSfarsitLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string sumaPlatita = linie;

                    System::String^ numeFilmtrim = msclr::interop::marshal_as<System::String^>(currentFilm)->Trim();
                    System::String^ Filmtrim = msclr::interop::marshal_as<System::String^>(filmStr)->Trim();
                    System::String^ numeClienttrim = msclr::interop::marshal_as<System::String^>(currentClient)->Trim();
                    System::String^ Clienttrim = msclr::interop::marshal_as<System::String^>(clientStr)->Trim();
                    System::String^ Emailtrim = msclr::interop::marshal_as<System::String^>(currentmail)->Trim();
                    System::String^ numeEmailtrim = msclr::interop::marshal_as<System::String^>(emailStr)->Trim();
                    System::String^ Regizortrim = msclr::interop::marshal_as<System::String^>(RegizorFilm)->Trim();
                    System::String^ regizorCLItrim = msclr::interop::marshal_as<System::String^>(regizorStr)->Trim();

                    

                    if (numeClienttrim == Clienttrim && numeFilmtrim == Filmtrim && Emailtrim == numeEmailtrim && Regizortrim == regizorCLItrim) {
                      
                        continue;
                    }
                    else {
                       
                        fisierOut << idRezervare << std::endl;
                        fisierOut << clientLine << std::endl;
                        fisierOut << telefonLine << std::endl;
                        fisierOut << emailLine << std::endl;
                        fisierOut << adresaLine << std::endl;
                        fisierOut << filmLine << std::endl;
                        fisierOut << regizorLine << std::endl;
                        fisierOut << dataInceperiiLine << std::endl;
                        fisierOut << dataSfarsitLine << std::endl;
                        fisierOut << sumaPlatita << std::endl;
                    }
                }
                else {
                    fisierOut << linie << std::endl;
                }
            }

            fisierIn.close();
            fisierOut.close();

            try {
            System::IO::File::Delete("Rezervari.txt");
            System::IO::File::Move("Rezervari_temp.txt", "Rezervari.txt");
            MessageBox::Show("Rezervarea a fost stearsa cu succes!");
        }
        catch (System::IO::IOException^ e) {
            MessageBox::Show("Eroare la manipularea fișierelor: " + e->Message);
        }
        }
       
        void StergeInchiriereDinFisier(System::String^ numeClient, System::String^ numeFilm , System::String^ email, System::String^ regizor) {
            std::ifstream fisierIn("Inchirieri.txt");
            std::ofstream fisierOut("Inchirieri_temp.txt");

            if (!fisierIn.is_open() || !fisierOut.is_open()) {
                System::Console::WriteLine("Eroare la deschiderea fisierelor!");
                return;
            }

            std::string linie;
            std::string clientStr = msclr::interop::marshal_as<std::string>(numeClient);
            std::string filmStr = msclr::interop::marshal_as<std::string>(numeFilm);
            std::string emailStr= msclr::interop::marshal_as<std::string>(email);
            std::string regizorStr = msclr::interop::marshal_as<std::string>(regizor);
            bool skipBlock = false;

            while (std::getline(fisierIn, linie)) {
                if (linie.find("ID Inchiriere: ") == 0) {
                    std::string idInchiriere = linie; 
                    std::getline(fisierIn, linie); 
                    std::string currentClient = linie.substr(8); 
                    std::string clientLine = linie; 
                    std::getline(fisierIn, linie); 
                    std::string telefonLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string currentmail = linie.substr(7);
                    std::string emailLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string adresaLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string currentFilm = linie.substr(6); 
                    std::string filmLine = linie; 
                    std::getline(fisierIn, linie); 
                    std::string RegizorFilm = linie.substr(9);
                    std::string regizorLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string dataInceperiiLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string dataSfarsitLine = linie;
                    std::getline(fisierIn, linie); 
                    std::string pretfinal = linie;

                    System::String^ numeFilmtrim = msclr::interop::marshal_as<System::String^>(currentFilm)->Trim();
                    System::String^ Filmtrim = msclr::interop::marshal_as<System::String^>(filmStr)->Trim();
                    System::String^ numeClienttrim = msclr::interop::marshal_as<System::String^>(currentClient)->Trim();
                    System::String^ Clienttrim = msclr::interop::marshal_as<System::String^>(clientStr)->Trim();
                    System::String^ Emailtrim = msclr::interop::marshal_as<System::String^>(currentmail)->Trim();
                    System::String^ numeEmailtrim = msclr::interop::marshal_as<System::String^>(emailStr)->Trim();
                    System::String^ Regizortrim = msclr::interop::marshal_as<System::String^>(RegizorFilm)->Trim();
                    System::String^ regizorCLItrim = msclr::interop::marshal_as<System::String^>(regizorStr)->Trim();



                    if (numeClienttrim == Clienttrim && numeFilmtrim == Filmtrim && Emailtrim==numeEmailtrim && Regizortrim==regizorCLItrim) {
                     
                        continue;
                    }
                    else {
                        
                        fisierOut << idInchiriere << std::endl;
                        fisierOut << clientLine << std::endl;
                        fisierOut << telefonLine << std::endl;
                        fisierOut << emailLine << std::endl;
                        fisierOut << adresaLine << std::endl;
                        fisierOut << filmLine << std::endl;
                        fisierOut << regizorLine << std::endl;
                        fisierOut << dataInceperiiLine << std::endl;
                        fisierOut << dataSfarsitLine << std::endl;
                        fisierOut << pretfinal << std::endl;
                    }
                }
                else {
                    fisierOut << linie << std::endl;
                }
            }

            fisierIn.close();
            fisierOut.close();

            try {
                System::IO::File::Delete("Inchirieri.txt");
                System::IO::File::Move("Inchirieri_temp.txt", "Inchirieri.txt");
                MessageBox::Show("Inchirierea a fost stearsa cu succes!");
            }
            catch (System::IO::IOException^ e) {
                MessageBox::Show("Eroare la manipularea fișierelor: " + e->Message);
            }
        }
        
        void ActualizeazaStocFilm(String^ numeFilm , String^ Regizor)
        {
            std::ifstream fisierIn("Filme.txt");
            std::ofstream fisierOut("Filme_temp.txt");

            std::string linie;
            while (getline(fisierIn, linie)) {
                std::stringstream ss(linie);
                std::string id, film, gen, regizor, an, stoc, pret;
                getline(ss, id, ',');
                getline(ss, film, ',');
                getline(ss, gen, ',');
                getline(ss, regizor, ',');
                getline(ss, an, ',');
                getline(ss, stoc, ',');
                getline(ss, pret, ',');

      
               
                if (film == msclr::interop::marshal_as<std::string>(numeFilm) && regizor == msclr::interop::marshal_as<std::string>(Regizor)) {
                    int stocInt = std::stoi(stoc);
                    stocInt += 1;  
                    stoc = std::to_string(stocInt);
                    System::String^ filmSTR = gcnew String(film.c_str());
                    System::String^ regizorSTR = gcnew String(regizor.c_str());
                    Film::VerificareAsteptare(filmSTR, regizorSTR, stocInt);
                }

                fisierOut << id << "," << film << "," << gen << "," << regizor << "," << an << "," << stoc << "," << pret << std::endl;
               
            }

            fisierIn.close();
            fisierOut.close();

            try {
                System::IO::File::Delete("Filme.txt");
                System::IO::File::Move("Filme_temp.txt", "Filme.txt");
            }
            catch (System::IO::IOException^ e) {
                MessageBox::Show("Eroare la manipularea fișierelor: " + e->Message);
            }
            
        }
        public:
        System::Void buttonAnul_Click(System::Object^ sender, System::EventArgs^ e) {
            if (date != nullptr)
            {
               
                this->StergeRezervareDinFisier(numeClientStr, numeFilmStr, Email,Regizor);
                this->ActualizeazaStocFilm(numeFilmStr,Regizor);
                date = nullptr;
                this->Close();
            }
            else
            {
                MessageBox::Show("Selectati o inchiriere");
            }
        }

        System::Void buttonConf_Click(System::Object^ sender, System::EventArgs^ e) {

            if (date != nullptr) {
                this->CitireRezervare(numeClientStr, numeFilmStr, Email,Regizor);
            
                this->StergeRezervareDinFisier(numeClientStr, numeFilmStr, Email,Regizor);

                date = nullptr;
                this->Close();
            }
            else
            {
                MessageBox::Show("Selectati o inchiriere");
            }
           
            
            
               
            
        }

         private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
}
   
        private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
        if (date != nullptr)
        {
           
            this->StergeInchiriereDinFisier(numeClientStr, numeFilmStr, Email,Regizor);
           
            this->ActualizeazaStocFilm(numeFilmStr,Regizor);
            date = nullptr;
            this->Close();
        }
        else
        {
            MessageBox::Show("Selectati o inchiriere");
        }
}
};
}
