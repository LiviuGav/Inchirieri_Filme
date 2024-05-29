#pragma once


#include <msclr/marshal_cppstd.h>
#include "Film.h"
#include "Inchiriere.h"
#include "Chitanta.h"
#include <cstdio>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace Interfataclr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RezervareInchiriere
	/// </summary>
	public ref class RezervareInchiriere : public System::Windows::Forms::Form
	{
	public:

		RezervareInchiriere(String^ id, String^ titlu, String^ gen, String^ regizor, String^ an, String^ stoc, String^ pret)
		{
			InitializeComponent();
			
			textBox1->Text = id;
			textBox2->Text = titlu;
			textBox3->Text = gen;
			textBox4->Text = regizor;
			textBox5->Text = an;
			textBox6->Text = stoc;
			textBox7->Text = pret;
		}

		void RezervareInchiriereExtra(String^ client, String^ anI, String^ lunaI, String^ ziI, String^ anS, String^ lunaS, String^ ziS, String^ telefon, String^ email, String^ adresa, String^ suma)
		{
			textBox8->Text = client;
			textBox8->ReadOnly = true;
			textBox9->Visible = false;
			textBox10->Text = telefon;
			textBox10->ReadOnly = true;
			textBox11->Text = email;
			textBox11->ReadOnly = true;
			textBox12->Text = adresa;
			textBox12->ReadOnly = true;
			textBox13->Visible = true;
			textBox13->Text = suma;
			textBoxYearI->Text = anI;
			textBoxYearI->Enabled = false;
			textBoxMonthI->Text = lunaI;
			textBoxMonthI->Enabled = false;
			textBoxDayI->Text = ziI;
			textBoxDayI->Enabled = false;
			textBoxYS->Text = anS;
			textBoxYS->Enabled = false;
			textBoxMS->Text = lunaS;
			textBoxMS->Enabled = false;
			textBoxDS->Text = ziS;
			textBoxDS->Enabled = false;
		}

	protected:
		~RezervareInchiriere()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;







	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxTotal;
	private: System::Windows::Forms::ComboBox^ comboBoxPlata;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBoxYearI;
	private: System::Windows::Forms::TextBox^ textBoxMonthI;
	private: System::Windows::Forms::TextBox^ textBoxDayI;
	private: System::Windows::Forms::TextBox^ textBoxYS;
	private: System::Windows::Forms::TextBox^ textBoxMS;
	private: System::Windows::Forms::TextBox^ textBoxDS;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label17;







	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTotal = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxPlata = (gcnew System::Windows::Forms::ComboBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYearI = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMonthI = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDayI = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYS = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMS = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDS = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(680, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(680, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(680, 170);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(680, 132);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(680, 214);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(680, 254);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(680, 297);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(59, 60);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(294, 22);
			this->textBox8->TabIndex = 7;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(121, 237);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(304, 22);
			this->textBox10->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(121, 280);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(304, 22);
			this->textBox11->TabIndex = 16;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(121, 324);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(304, 22);
			this->textBox12->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(303, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Confirmare";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RezervareInchiriere::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(464, 452);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Anulare";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RezervareInchiriere::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(326, 406);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 25);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Completati toate casutele";
			this->label1->Visible = false;
			// 
			// textBoxTotal
			// 
			this->textBoxTotal->Location = System::Drawing::Point(680, 432);
			this->textBoxTotal->Name = L"textBoxTotal";
			this->textBoxTotal->ReadOnly = true;
			this->textBoxTotal->Size = System::Drawing::Size(100, 22);
			this->textBoxTotal->TabIndex = 21;
			// 
			// comboBoxPlata
			// 
			this->comboBoxPlata->FormattingEnabled = true;
			this->comboBoxPlata->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Numerar", L"Card", L"Transfer bancar" });
			this->comboBoxPlata->Location = System::Drawing::Point(167, 376);
			this->comboBoxPlata->Name = L"comboBoxPlata";
			this->comboBoxPlata->Size = System::Drawing::Size(121, 24);
			this->comboBoxPlata->TabIndex = 22;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(680, 342);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 23;
			this->textBox13->Visible = false;
			// 
			// textBoxYearI
			// 
			this->textBoxYearI->Location = System::Drawing::Point(59, 131);
			this->textBoxYearI->Name = L"textBoxYearI";
			this->textBoxYearI->Size = System::Drawing::Size(100, 22);
			this->textBoxYearI->TabIndex = 24;
			// 
			// textBoxMonthI
			// 
			this->textBoxMonthI->Location = System::Drawing::Point(154, 131);
			this->textBoxMonthI->Name = L"textBoxMonthI";
			this->textBoxMonthI->Size = System::Drawing::Size(100, 22);
			this->textBoxMonthI->TabIndex = 25;
			// 
			// textBoxDayI
			// 
			this->textBoxDayI->Location = System::Drawing::Point(253, 131);
			this->textBoxDayI->Name = L"textBoxDayI";
			this->textBoxDayI->Size = System::Drawing::Size(100, 22);
			this->textBoxDayI->TabIndex = 26;
			// 
			// textBoxYS
			// 
			this->textBoxYS->Location = System::Drawing::Point(59, 189);
			this->textBoxYS->Name = L"textBoxYS";
			this->textBoxYS->Size = System::Drawing::Size(100, 22);
			this->textBoxYS->TabIndex = 27;
			// 
			// textBoxMS
			// 
			this->textBoxMS->Location = System::Drawing::Point(154, 189);
			this->textBoxMS->Name = L"textBoxMS";
			this->textBoxMS->Size = System::Drawing::Size(100, 22);
			this->textBoxMS->TabIndex = 28;
			// 
			// textBoxDS
			// 
			this->textBoxDS->Location = System::Drawing::Point(253, 189);
			this->textBoxDS->Name = L"textBoxDS";
			this->textBoxDS->Size = System::Drawing::Size(100, 22);
			this->textBoxDS->TabIndex = 29;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(430, 60);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(127, 22);
			this->textBox9->TabIndex = 30;
			this->textBox9->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(151, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 16);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Nume si prenume:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(112, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 16);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Data Inceperii (YYYY/MM/DD):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(112, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 16);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Data incheierii (YYYY/MM/DD):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(41, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Telefon: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(56, 283);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Email:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(56, 327);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 16);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Adresa:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 381);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 16);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Modalitate de plata:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(628, 36);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 16);
			this->label10->TabIndex = 38;
			this->label10->Text = L"ID:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(627, 89);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 16);
			this->label11->TabIndex = 39;
			this->label11->Text = L"Film:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(605, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 16);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Regizor:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(616, 170);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(35, 16);
			this->label13->TabIndex = 41;
			this->label13->Text = L"Gen:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(580, 214);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 16);
			this->label14->TabIndex = 42;
			this->label14->Text = L"Anul lansarii:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(614, 254);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 16);
			this->label15->TabIndex = 43;
			this->label15->Text = L"Stoc:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(534, 297);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(117, 16);
			this->label16->TabIndex = 44;
			this->label16->Text = L"Pret inchiriere/luna";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(544, 342);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 16);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Pret platit in avans:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(690, 395);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 16);
			this->label17->TabIndex = 46;
			this->label17->Text = L"TOTAL:";
			// 
			// RezervareInchiriere
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(802, 505);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBoxDS);
			this->Controls->Add(this->textBoxMS);
			this->Controls->Add(this->textBoxYS);
			this->Controls->Add(this->textBoxDayI);
			this->Controls->Add(this->textBoxMonthI);
			this->Controls->Add(this->textBoxYearI);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->comboBoxPlata);
			this->Controls->Add(this->textBoxTotal);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"RezervareInchiriere";
			this->Text = L"RezervareInchiriere";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox8->Text == "" || textBox10->Text == "" ||
			textBox11->Text == "" || textBox12->Text == "" ||
			 comboBoxPlata->SelectedIndex == -1) {
			label1->Visible = true;
			return; 
		}
		else
		{
			int newID, nr = 0;
			std::ifstream inFile("Inchirieri.txt");
			std::string line;

			if (inFile.is_open()) {
				while (std::getline(inFile, line)) {
					if (line.find("ID Inchiriere:") != std::string::npos) {
						nr++;
					}
				}
				inFile.close();
				newID = nr + 1;

			}


			std::string incep_An = msclr::interop::marshal_as<std::string>(textBoxYearI->Text);
			std::string incep_Luna = msclr::interop::marshal_as<std::string>(textBoxMonthI->Text);
			std::string incep_Zi = msclr::interop::marshal_as<std::string>(textBoxDayI->Text);

			std::string sfarsit_An = msclr::interop::marshal_as<std::string>(textBoxYS->Text);
			std::string sfarsit_Luna = msclr::interop::marshal_as<std::string>(textBoxMS->Text);
			std::string sfarsit_Zi = msclr::interop::marshal_as<std::string>(textBoxDS->Text);


			
			std::string dataInceperii = incep_An + "-" + incep_Luna + "-" + incep_Zi; 
			std::string dataSfarsit = sfarsit_An + "-" + sfarsit_Luna + "-" + sfarsit_Zi; 
			std::string numeClient = msclr::interop::marshal_as<std::string>(textBox8->Text);
			std::string prenumeClient = msclr::interop::marshal_as<std::string>(textBox9->Text);
			std::string telefonClient = msclr::interop::marshal_as<std::string>(textBox10->Text);
			std::string emailClient = msclr::interop::marshal_as<std::string>(textBox11->Text);
			std::string adresaClient = msclr::interop::marshal_as<std::string>(textBox12->Text);
			std::string numeFilm = msclr::interop::marshal_as<std::string>(textBox2->Text);
			std::string regizorFilm = msclr::interop::marshal_as<std::string>(textBox4->Text);
			std::string numecomplet = numeClient + " " + prenumeClient;
			std::string modalitatePlata = msclr::interop::marshal_as<std::string>(comboBoxPlata->Text);

			
			int id = System::Convert::ToInt32(textBox1->Text);
			String^ titlu = textBox2->Text;
			String^ gen = textBox3->Text;
			String^ regizor = textBox4->Text;
			int anulLansarii = System::Convert::ToInt32(textBox5->Text);
			int stocDisponibil = System::Convert::ToInt32(textBox6->Text);
			double pretInchiriere = System::Convert::ToDouble(textBox7->Text);
			double sumaPlatita = 0;

			
			Inchiriere inchiriere(
				newID,
				dataInceperii,
				dataSfarsit,
				msclr::interop::marshal_as<std::string>(titlu),
				msclr::interop::marshal_as<std::string>(regizor),
				pretInchiriere,
				numeClient,
				prenumeClient,
				telefonClient,
				emailClient,
				adresaClient
			);

			

			

			if (String::IsNullOrEmpty(textBoxTotal->Text))
			{
				MessageBox::Show("Verificati mai intai pretul!");
				textBoxTotal->Text = (inchiriere.CalculeazaCostTotal()-Double::Parse(textBox13->Text)).ToString();
				
			}
			else
			{
				sumaPlatita = System::Convert::ToDouble(textBoxTotal->Text);
				
				inchiriere.SalveazaInchiriere();
				
				StergeRezervareDinFisier(textBox8->Text->Trim(), textBox2->Text->Trim() , textBox4->Text->Trim());
				
				
				Chitanta chitanta(numecomplet, numeFilm, regizorFilm, dataInceperii, dataSfarsit, sumaPlatita, modalitatePlata);
				
				MessageBox::Show("Inchirierea a fost confirmata si chitanta a fost generata!");

				
				chitanta.SalvareChitantaInFisier("Factura.txt");
				this->Close();


			}
		}
	}
	public: void StergeRezervareDinFisier(System::String^ numeClient, System::String^ numeFilm,System::String^ Regizor) {
		std::ifstream fisierIn("Rezervari.txt");
		std::ofstream fisierOut("Rezervari_temp.txt");

		if (!fisierIn.is_open() || !fisierOut.is_open()) {
			System::Console::WriteLine("Eroare la deschiderea fisierelor!");
			return;
		}

		std::string linie;
		std::string clientStr = msclr::interop::marshal_as<std::string>(numeClient);
		std::string filmStr = msclr::interop::marshal_as<std::string>(numeFilm);
		std::string regizorStr = msclr::interop::marshal_as<std::string>(Regizor);
		bool skipBlock = false;

		while (std::getline(fisierIn, linie)) {
			if (linie.find("ID Rezervare: ") == 0) {
				std::string idRezervare = linie; // Stocheaza linia "ID Inchiriere: "
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
				std::string RegizorFilm = linie.substr(9);
				std::string regizorLine = linie;
				std::getline(fisierIn, linie); // Citeste linia "Data inceperii: "
				std::string dataInceperiiLine = linie;
				std::getline(fisierIn, linie); // Citeste linia "Data sfarsit: "
				std::string dataSfarsitLine = linie;
				std::getline(fisierIn, linie); // Citeste linia "Pret total: "
				std::string sumaPlatita = linie;

				if (currentClient == clientStr && currentFilm == filmStr && RegizorFilm==regizorStr) {
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
		
		
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	

};
}
