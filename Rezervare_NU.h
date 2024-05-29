#pragma once


#include <msclr/marshal_cppstd.h>
#include "InchiriereForm.h"
#include "RezervareForm.h"
#include "Asteptare.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include "Film.h"



namespace Interfataclr {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    
    public ref class Rezervare_NU : public System::Windows::Forms::Form
    {
        
    public:
        Rezervare_NU()
        {
            InitializeComponent();
        }
        void SetNoRezNoFiVisible(bool isVisible)
        {
            labelNoRezNoFi->Visible = !isVisible;
        }


        void SetNoRezYesFiVisible(bool isVisible,String^ text) 
        {
            labelNoRezNoFi->Visible = isVisible;
            labelNoRezYesFi->Visible = !isVisible;
            buttonRez->Visible = !isVisible;
            buttonInc->Visible = !isVisible;
            button2->Visible = isVisible;
            listBoxRezultate->Visible = !isVisible; 
            AfisareFilm(msclr::interop::marshal_as<std::string>(text));

        }
    protected:
        ~Rezervare_NU()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::TextBox^ textBoxCriteriu;
        System::Windows::Forms::ListBox^ listBoxRezultate; 
        System::Windows::Forms::Button^ buttonBack;
        System::Windows::Forms::Button^ buttonCauta;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2;

        System::Windows::Forms::Button^ buttonRez;

        // Obiect pentru a păstra filmul selectat
        Film^ selectedFilm;
    private: System::Windows::Forms::Label^ labelNoRezYesFi;
    private: System::Windows::Forms::Label^ labelAlege;
    private: System::Windows::Forms::Label^ labelNoRezNoFi;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ buttonInc;
    private: System::Windows::Forms::PictureBox^ pictureBox1;



        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->textBoxCriteriu = (gcnew System::Windows::Forms::TextBox());
            this->listBoxRezultate = (gcnew System::Windows::Forms::ListBox());
            this->buttonBack = (gcnew System::Windows::Forms::Button());
            this->buttonCauta = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->buttonRez = (gcnew System::Windows::Forms::Button());
            this->labelNoRezYesFi = (gcnew System::Windows::Forms::Label());
            this->labelAlege = (gcnew System::Windows::Forms::Label());
            this->labelNoRezNoFi = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->buttonInc = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // textBoxCriteriu
            // 
            this->textBoxCriteriu->Location = System::Drawing::Point(257, 147);
            this->textBoxCriteriu->Margin = System::Windows::Forms::Padding(4);
            this->textBoxCriteriu->Name = L"textBoxCriteriu";
            this->textBoxCriteriu->Size = System::Drawing::Size(197, 22);
            this->textBoxCriteriu->TabIndex = 0;
            this->textBoxCriteriu->Visible = false;
            // 
            // listBoxRezultate
            // 
            this->listBoxRezultate->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->listBoxRezultate->FormattingEnabled = true;
            this->listBoxRezultate->ItemHeight = 16;
            this->listBoxRezultate->Location = System::Drawing::Point(1, 240);
            this->listBoxRezultate->Margin = System::Windows::Forms::Padding(4);
            this->listBoxRezultate->Name = L"listBoxRezultate";
            this->listBoxRezultate->Size = System::Drawing::Size(707, 192);
            this->listBoxRezultate->TabIndex = 2;
            this->listBoxRezultate->Visible = false;
            this->listBoxRezultate->SelectedIndexChanged += gcnew System::EventHandler(this, &Rezervare_NU::listBoxRezultate_SelectedIndexChanged);
            // 
            // buttonBack
            // 
            this->buttonBack->Location = System::Drawing::Point(533, 163);
            this->buttonBack->Name = L"buttonBack";
            this->buttonBack->Size = System::Drawing::Size(75, 23);
            this->buttonBack->TabIndex = 17;
            this->buttonBack->Text = L"Inapoi";
            this->buttonBack->UseVisualStyleBackColor = true;
            this->buttonBack->Visible = false;
            this->buttonBack->Click += gcnew System::EventHandler(this, &Rezervare_NU::buttonBack_Click);
            // 
            // buttonCauta
            // 
            this->buttonCauta->Location = System::Drawing::Point(257, 204);
            this->buttonCauta->Margin = System::Windows::Forms::Padding(4);
            this->buttonCauta->Name = L"buttonCauta";
            this->buttonCauta->Size = System::Drawing::Size(199, 28);
            this->buttonCauta->TabIndex = 1;
            this->buttonCauta->Text = L"Cauta alternative";
            this->buttonCauta->UseVisualStyleBackColor = true;
            this->buttonCauta->Visible = false;
            this->buttonCauta->Click += gcnew System::EventHandler(this, &Rezervare_NU::buttonCauta_Click);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(276, 176);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(157, 23);
            this->button1->TabIndex = 18;
            this->button1->Text = L"Alternative";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Rezervare_NU::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(283, 204);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(150, 28);
            this->button2->TabIndex = 19;
            this->button2->Text = L"Lista de asteptare";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Rezervare_NU::button2_Click);
            // 
            // buttonRez
            // 
            this->buttonRez->Location = System::Drawing::Point(73, 103);
            this->buttonRez->Name = L"buttonRez";
            this->buttonRez->Size = System::Drawing::Size(92, 23);
            this->buttonRez->TabIndex = 21;
            this->buttonRez->Text = L"Rezervare";
            this->buttonRez->UseVisualStyleBackColor = true;
            this->buttonRez->Visible = false;
            this->buttonRez->Click += gcnew System::EventHandler(this, &Rezervare_NU::buttonRez_Click);
            // 
            // labelNoRezYesFi
            // 
            this->labelNoRezYesFi->AutoSize = true;
            this->labelNoRezYesFi->BackColor = System::Drawing::SystemColors::Window;
            this->labelNoRezYesFi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNoRezYesFi->Location = System::Drawing::Point(143, 48);
            this->labelNoRezYesFi->Name = L"labelNoRezYesFi";
            this->labelNoRezYesFi->Size = System::Drawing::Size(465, 20);
            this->labelNoRezYesFi->TabIndex = 22;
            this->labelNoRezYesFi->Text = L"Din nefericire nu am gasit rezervarea,dar avem filmul disponibil";
            // 
            // labelAlege
            // 
            this->labelAlege->AutoSize = true;
            this->labelAlege->BackColor = System::Drawing::SystemColors::Window;
            this->labelAlege->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelAlege->Location = System::Drawing::Point(308, 78);
            this->labelAlege->Name = L"labelAlege";
            this->labelAlege->Size = System::Drawing::Size(90, 22);
            this->labelAlege->TabIndex = 23;
            this->labelAlege->Text = L"Ce doriti\?";
            // 
            // labelNoRezNoFi
            // 
            this->labelNoRezNoFi->AutoSize = true;
            this->labelNoRezNoFi->BackColor = System::Drawing::SystemColors::Window;
            this->labelNoRezNoFi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNoRezNoFi->Location = System::Drawing::Point(78, 49);
            this->labelNoRezNoFi->Name = L"labelNoRezNoFi";
            this->labelNoRezNoFi->Size = System::Drawing::Size(566, 19);
            this->labelNoRezNoFi->TabIndex = 24;
            this->labelNoRezNoFi->Text = L"Din nefericire nu am gasit rezervarea , si nici nu avem filmul disponibil momenta"
                L"n";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::SystemColors::Window;
            this->label1->Location = System::Drawing::Point(240, 110);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(216, 16);
            this->label1->TabIndex = 25;
            this->label1->Text = L"Alegeti genul filmului dorit (optional)";
            this->label1->Visible = false;
            // 
            // buttonInc
            // 
            this->buttonInc->Location = System::Drawing::Point(524, 107);
            this->buttonInc->Name = L"buttonInc";
            this->buttonInc->Size = System::Drawing::Size(96, 23);
            this->buttonInc->TabIndex = 26;
            this->buttonInc->Text = L"Inchiriere";
            this->buttonInc->UseVisualStyleBackColor = true;
            this->buttonInc->Visible = false;
            this->buttonInc->Click += gcnew System::EventHandler(this, &Rezervare_NU::buttonInc_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
            this->pictureBox1->Location = System::Drawing::Point(1, -2);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(707, 438);
            this->pictureBox1->TabIndex = 27;
            this->pictureBox1->TabStop = false;
            // 
            // Rezervare_NU
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(705, 437);
            this->Controls->Add(this->buttonInc);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->labelNoRezNoFi);
            this->Controls->Add(this->labelAlege);
            this->Controls->Add(this->buttonRez);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->buttonCauta);
            this->Controls->Add(this->listBoxRezultate);
            this->Controls->Add(this->textBoxCriteriu);
            this->Controls->Add(this->buttonBack);
            this->Controls->Add(this->labelNoRezYesFi);
            this->Controls->Add(this->pictureBox1);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"Rezervare_NU";
            this->Text = L"Rezervare_NU";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
        {
            label1->Visible = false;
            labelNoRezNoFi->Visible = false;
            labelNoRezYesFi->Visible = false;
            button1->Visible = true;
            button2->Visible = true;
            buttonCauta->Visible = false;
            this->buttonBack->Visible = false;
            listBoxRezultate->Visible = false;
            this->buttonInc->Visible = false;
            this->buttonRez->Visible = false;
            textBoxCriteriu->Visible = false;
            listBoxRezultate->Items->Clear(); 
        }

        System::Void buttonCauta_Click(System::Object^ sender, System::EventArgs^ e) {
           
            std::string criteriuStr = msclr::interop::marshal_as<std::string>(textBoxCriteriu->Text);
            
            AfiseazaAlternativa(criteriuStr);
        }

        void AfiseazaAlternativa(const std::string& criteriu) {
            std::ifstream fisierIn("Filme.txt");
            listBoxRezultate->Items->Clear(); 
            std::string linie;
            while (getline(fisierIn, linie)) {
                std::stringstream ss(linie);
                std::string id, titlu, gen, regizor, anulLansarii, stoc, pret;

               
                if (getline(ss >> std::ws, id, ',') &&
                    getline(ss >> std::ws, titlu, ',') &&
                    getline(ss >> std::ws, gen, ',') &&
                    getline(ss >> std::ws, regizor, ',') &&
                    getline(ss >> std::ws, anulLansarii, ',') &&
                    getline(ss >> std::ws, stoc, ',') &&
                    getline(ss >> std::ws, pret, ',')) {

                    
                    if (gen.find(criteriu) != std::string::npos && std::stoi(stoc) >= 1) {
                        this->buttonInc->Visible = true;
                        this->buttonRez->Visible = true;

                      
                        String^ rezultat = "ID: " + gcnew String(id.c_str()) + ", Titlu: " + gcnew String(titlu.c_str()) +
                            ", Gen: " + gcnew String(gen.c_str()) + ", Regizor: " + gcnew String(regizor.c_str()) +
                            ", An: " + gcnew String(anulLansarii.c_str()) + ", Stoc: " + gcnew String(stoc.c_str()) +
                            ", Pret: " + gcnew String(pret.c_str());

                      
                        listBoxRezultate->Items->Add(rezultat);
                    }
                }
            }
            fisierIn.close();
        }

        void AfisareFilm(const std::string& criteriu) {
            std::ifstream fisierIn("Filme.txt");
            listBoxRezultate->Items->Clear(); 
            std::string linie;
            while (getline(fisierIn, linie)) {
                std::stringstream ss(linie);
                std::string id, titlu, gen, regizor, anulLansarii, stoc, pret;

                
                if (getline(ss >> std::ws, id, ',') &&
                    getline(ss >> std::ws, titlu, ',') &&
                    getline(ss >> std::ws, gen, ',') &&
                    getline(ss >> std::ws, regizor, ',') &&
                    getline(ss >> std::ws, anulLansarii, ',') &&
                    getline(ss >> std::ws, stoc, ',') &&
                    getline(ss >> std::ws, pret, ',')) {

                    
                    if (titlu.find(criteriu) != std::string::npos && std::stoi(stoc) >= 1) {
                        this->buttonInc->Visible = true;
                        this->buttonRez->Visible = true;

                     
                        String^ rezultat = "ID: " + gcnew String(id.c_str()) + ", Titlu: " + gcnew String(titlu.c_str()) +
                            ", Gen: " + gcnew String(gen.c_str()) + ", Regizor: " + gcnew String(regizor.c_str()) +
                            ", An: " + gcnew String(anulLansarii.c_str()) + ", Stoc: " + gcnew String(stoc.c_str()) +
                            ", Pret: " + gcnew String(pret.c_str());

                       
                        listBoxRezultate->Items->Add(rezultat);
                    }
                }
            }
            fisierIn.close();
        }

        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            label1->Visible = true;
            button1->Visible = false;
            button2->Visible = false;
            buttonCauta->Visible = true;
            this->buttonBack->Visible = true;
            listBoxRezultate->Visible = true;
            textBoxCriteriu->Visible = true;
        }

        System::Void listBoxRezultate_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            if (listBoxRezultate->SelectedIndex != -1) {
              
                String^ selectedItem = listBoxRezultate->SelectedItem->ToString();

               
                array<String^>^ date = selectedItem->Split(gcnew array<wchar_t>{ ':', ',' }, StringSplitOptions::RemoveEmptyEntries);

                try {
                    int id = Int32::Parse(date[1]->Trim());
                    String^ titlu = date[3]->Trim();
                    String^ gen = date[5]->Trim();
                    String^ regizor = date[7]->Trim();
                    int anulLansarii = Int32::Parse(date[9]->Trim());
                    int stocDisponibil = Int32::Parse(date[11]->Trim());
                    double pretInchiriere = Double::Parse(date[13]->Trim());

                    
                    selectedFilm = gcnew Film(id, titlu, gen, regizor, anulLansarii, stocDisponibil, pretInchiriere);
                }
                catch (FormatException^ ex) {
                   
                    MessageBox::Show("Eroare: Datele filmului selectat nu sunt într-un format corect.");
                }
            }
        }

        System::Void buttonRez_Click(System::Object^ sender, System::EventArgs^ e) {
  
            if (selectedFilm != nullptr) {


                listBoxRezultate->Items->Clear(); 

                int id = selectedFilm->GetID();
                String^ titlu = selectedFilm->GetTitlu();
                String^ gen = selectedFilm->GetGen();
                String^ regizor = selectedFilm->GetRegizor();
                int anulLansarii = selectedFilm->GetAnulLansarii();
                int stocDisponibil = selectedFilm->GetStocDisponibil();
                double pretInchiriere = selectedFilm->GetPretInchiriere();

                
                String^ idString = id.ToString(); 
                String^ anulLansariiString = anulLansarii.ToString();
                String^ stocDisponibilString = stocDisponibil.ToString();
                String^ pretInchiriereString = pretInchiriere.ToString();

                
                RezervareForm^ formularRezervare = gcnew RezervareForm(idString, titlu, gen, regizor, anulLansariiString, stocDisponibilString, pretInchiriereString);
                formularRezervare->ShowDialog();


            }
            else
            {
                MessageBox::Show("Selectati un film!");
            }
        }

        System::Void buttonInc_Click(System::Object^ sender, System::EventArgs^ e) {
      
            if (selectedFilm != nullptr) {
                

                listBoxRezultate->Items->Clear(); 

              
                int id = selectedFilm->GetID();
                String^ titlu = selectedFilm->GetTitlu();
                String^ gen = selectedFilm->GetGen();
                String^ regizor = selectedFilm->GetRegizor();
                int anulLansarii = selectedFilm->GetAnulLansarii();
                int stocDisponibil = selectedFilm->GetStocDisponibil();
                double pretInchiriere = selectedFilm->GetPretInchiriere();

               
                String^ idString = id.ToString(); 
                String^ anulLansariiString = anulLansarii.ToString();
                String^ stocDisponibilString = stocDisponibil.ToString();
                String^ pretInchiriereString = pretInchiriere.ToString();

           
                InchiriereForm^ formularInchiriere = gcnew InchiriereForm(idString, titlu, gen, regizor, anulLansariiString, stocDisponibilString, pretInchiriereString);
                formularInchiriere->ShowDialog();
                

            }
            else
            {
                MessageBox::Show("Selectati un film!");
            }
    }
        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    Asteptare^ lista = gcnew Asteptare();
    lista->ShowDialog();
}
};
}
