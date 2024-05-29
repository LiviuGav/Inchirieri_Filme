#pragma once

#include <msclr/marshal_cppstd.h>

#include "Inchiriere.h"
#include "Rezervare_DA.h"
#include "Film.h"
#include <iostream>
#include <string>
#include "Rezervare_NU.h"

namespace Interfataclr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;  // Adaugam namespace-ul System::IO pentru StreamWriter

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		
		void AfiseazaDateFilm(Film^ film) {
			E_textBoxID->Text = film->GetID().ToString();
			E_textBoxTitlu->Text = film->GetTitlu();
			E_textBoxGen->Text = film->GetGen();
			E_textBoxRegizor->Text = film->GetRegizor();
			E_textBoxAnulLansarii->Text = film->GetAnulLansarii().ToString();
			E_textBoxStocDisponibil->Text = film->GetStocDisponibil().ToString();
			E_textBoxPretInchiriere->Text = film->GetPretInchiriere().ToString();
		}
		
		MyForm1()
		{
			InitializeComponent();

			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBoxNumeFilm;
	private: System::Windows::Forms::Label^ labelNumeFilm;
	private: System::Windows::Forms::Button^ buttonCautare;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	//ADAUGARE FILM
	private:
		System::Windows::Forms::TextBox^ textBoxID;
		System::Windows::Forms::TextBox^ textBoxTitlu;
		System::Windows::Forms::TextBox^ textBoxGen;
		System::Windows::Forms::TextBox^ textBoxRegizor;
		System::Windows::Forms::TextBox^ textBoxAnulLansarii;
		System::Windows::Forms::TextBox^ textBoxStocDisponibil;
		System::Windows::Forms::TextBox^ textBoxPretInchiriere;
		System::Windows::Forms::Button^ buttonAdauga;
	private: System::Windows::Forms::Label^ label_ID;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonBack;
	//EDITARE FILM
	private: System::Windows::Forms::TextBox^ E_textBoxTitlu;
	private: System::Windows::Forms::TextBox^ E_textBoxGen;
	private: System::Windows::Forms::TextBox^ E_textBoxRegizor;
	private: System::Windows::Forms::TextBox^ E_textBoxAnulLansarii;
	private: System::Windows::Forms::TextBox^ E_textBoxStocDisponibil;
	private: System::Windows::Forms::TextBox^ E_textBoxPretInchiriere;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ E_label1;
	private: System::Windows::Forms::Label^ E_label2;
	private: System::Windows::Forms::Label^ E_label3;
	private: System::Windows::Forms::Label^ E_label4;
	private: System::Windows::Forms::Label^ E_label5;
	private: System::Windows::Forms::Label^ E_label6;
	private: System::Windows::Forms::Button^ E_button1;
	private: System::Windows::Forms::TextBox^ E_textBoxID;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox5;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBoxNumeFilm = (gcnew System::Windows::Forms::TextBox());
			this->labelNumeFilm = (gcnew System::Windows::Forms::Label());
			this->buttonCautare = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTitlu = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGen = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRegizor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAnulLansarii = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStocDisponibil = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPretInchiriere = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdauga = (gcnew System::Windows::Forms::Button());
			this->label_ID = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->E_textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->E_textBoxTitlu = (gcnew System::Windows::Forms::TextBox());
			this->E_textBoxGen = (gcnew System::Windows::Forms::TextBox());
			this->E_textBoxRegizor = (gcnew System::Windows::Forms::TextBox());
			this->E_textBoxAnulLansarii = (gcnew System::Windows::Forms::TextBox());
			this->E_textBoxStocDisponibil = (gcnew System::Windows::Forms::TextBox());
			this->E_textBoxPretInchiriere = (gcnew System::Windows::Forms::TextBox());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->E_label1 = (gcnew System::Windows::Forms::Label());
			this->E_label2 = (gcnew System::Windows::Forms::Label());
			this->E_label3 = (gcnew System::Windows::Forms::Label());
			this->E_label4 = (gcnew System::Windows::Forms::Label());
			this->E_label5 = (gcnew System::Windows::Forms::Label());
			this->E_label6 = (gcnew System::Windows::Forms::Label());
			this->E_button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(325, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Adauga Film";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(102, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Modificare Date Film";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(844, 30);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Verificare Rezervare";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(579, 30);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 28);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Terminare Inchiriere";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// textBoxNumeFilm
			// 
			this->textBoxNumeFilm->Location = System::Drawing::Point(82, 120);
			this->textBoxNumeFilm->Name = L"textBoxNumeFilm";
			this->textBoxNumeFilm->Size = System::Drawing::Size(158, 22);
			this->textBoxNumeFilm->TabIndex = 8;
			this->textBoxNumeFilm->Visible = false;
			// 
			// labelNumeFilm
			// 
			this->labelNumeFilm->AutoSize = true;
			this->labelNumeFilm->Location = System::Drawing::Point(79, 86);
			this->labelNumeFilm->Name = L"labelNumeFilm";
			this->labelNumeFilm->Size = System::Drawing::Size(161, 16);
			this->labelNumeFilm->TabIndex = 9;
			this->labelNumeFilm->Text = L"Introduceti numele filmului:";
			this->labelNumeFilm->Visible = false;
			// 
			// buttonCautare
			// 
			this->buttonCautare->Location = System::Drawing::Point(121, 235);
			this->buttonCautare->Name = L"buttonCautare";
			this->buttonCautare->Size = System::Drawing::Size(85, 23);
			this->buttonCautare->TabIndex = 10;
			this->buttonCautare->Text = L"Cauta filmul";
			this->buttonCautare->UseVisualStyleBackColor = true;
			this->buttonCautare->Visible = false;
			this->buttonCautare->Click += gcnew System::EventHandler(this, &MyForm1::buttonCautare_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(843, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 22);
			this->textBox1->TabIndex = 11;
			this->textBox1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(841, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 16);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Introduceti numele clientului:";
			this->label1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(834, 175);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 22);
			this->textBox2->TabIndex = 13;
			this->textBox2->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(841, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 16);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Introduceti filmul rezervat:";
			this->label2->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(859, 212);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Cauta rezervarea";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-6, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1071, 606);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(121, 102);
			this->textBoxID->Margin = System::Windows::Forms::Padding(4);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(265, 22);
			this->textBoxID->TabIndex = 0;
			this->textBoxID->Visible = false;
			// 
			// textBoxTitlu
			// 
			this->textBoxTitlu->Location = System::Drawing::Point(121, 138);
			this->textBoxTitlu->Margin = System::Windows::Forms::Padding(4);
			this->textBoxTitlu->Name = L"textBoxTitlu";
			this->textBoxTitlu->Size = System::Drawing::Size(265, 22);
			this->textBoxTitlu->TabIndex = 1;
			this->textBoxTitlu->Visible = false;
			// 
			// textBoxGen
			// 
			this->textBoxGen->Location = System::Drawing::Point(121, 181);
			this->textBoxGen->Margin = System::Windows::Forms::Padding(4);
			this->textBoxGen->Name = L"textBoxGen";
			this->textBoxGen->Size = System::Drawing::Size(265, 22);
			this->textBoxGen->TabIndex = 2;
			this->textBoxGen->Visible = false;
			// 
			// textBoxRegizor
			// 
			this->textBoxRegizor->Location = System::Drawing::Point(121, 221);
			this->textBoxRegizor->Margin = System::Windows::Forms::Padding(4);
			this->textBoxRegizor->Name = L"textBoxRegizor";
			this->textBoxRegizor->Size = System::Drawing::Size(265, 22);
			this->textBoxRegizor->TabIndex = 3;
			this->textBoxRegizor->Visible = false;
			// 
			// textBoxAnulLansarii
			// 
			this->textBoxAnulLansarii->Location = System::Drawing::Point(121, 265);
			this->textBoxAnulLansarii->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAnulLansarii->Name = L"textBoxAnulLansarii";
			this->textBoxAnulLansarii->Size = System::Drawing::Size(265, 22);
			this->textBoxAnulLansarii->TabIndex = 4;
			this->textBoxAnulLansarii->Visible = false;
			// 
			// textBoxStocDisponibil
			// 
			this->textBoxStocDisponibil->Location = System::Drawing::Point(121, 316);
			this->textBoxStocDisponibil->Margin = System::Windows::Forms::Padding(4);
			this->textBoxStocDisponibil->Name = L"textBoxStocDisponibil";
			this->textBoxStocDisponibil->Size = System::Drawing::Size(265, 22);
			this->textBoxStocDisponibil->TabIndex = 5;
			this->textBoxStocDisponibil->Visible = false;
			// 
			// textBoxPretInchiriere
			// 
			this->textBoxPretInchiriere->Location = System::Drawing::Point(121, 362);
			this->textBoxPretInchiriere->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPretInchiriere->Name = L"textBoxPretInchiriere";
			this->textBoxPretInchiriere->Size = System::Drawing::Size(265, 22);
			this->textBoxPretInchiriere->TabIndex = 6;
			this->textBoxPretInchiriere->Visible = false;
			// 
			// buttonAdauga
			// 
			this->buttonAdauga->Location = System::Drawing::Point(139, 434);
			this->buttonAdauga->Margin = System::Windows::Forms::Padding(4);
			this->buttonAdauga->Name = L"buttonAdauga";
			this->buttonAdauga->Size = System::Drawing::Size(267, 28);
			this->buttonAdauga->TabIndex = 7;
			this->buttonAdauga->Text = L"Adauga";
			this->buttonAdauga->UseVisualStyleBackColor = true;
			this->buttonAdauga->Visible = false;
			this->buttonAdauga->Click += gcnew System::EventHandler(this, &MyForm1::buttonAdauga_Click);
			// 
			// label_ID
			// 
			this->label_ID->AutoSize = true;
			this->label_ID->Location = System::Drawing::Point(48, 108);
			this->label_ID->Name = L"label_ID";
			this->label_ID->Size = System::Drawing::Size(20, 16);
			this->label_ID->TabIndex = 8;
			this->label_ID->Text = L"ID";
			this->label_ID->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 16);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Titlu";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(36, 181);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 16);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Gen";
			this->label8->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Regizor";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Anul lansariii";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 316);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Stoc disponibil";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 362);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Pret inchiriere";
			this->label6->Visible = false;
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(605, 108);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(75, 23);
			this->buttonBack->TabIndex = 17;
			this->buttonBack->Text = L"Inapoi";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Visible = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm1::buttonBack_Click);
			// 
			// E_textBoxID
			// 
			this->E_textBoxID->Location = System::Drawing::Point(51, 59);
			this->E_textBoxID->Name = L"E_textBoxID";
			this->E_textBoxID->Size = System::Drawing::Size(100, 22);
			this->E_textBoxID->TabIndex = 0;
			this->E_textBoxID->Visible = false;
			// 
			// E_textBoxTitlu
			// 
			this->E_textBoxTitlu->Location = System::Drawing::Point(192, 59);
			this->E_textBoxTitlu->Name = L"E_textBoxTitlu";
			this->E_textBoxTitlu->Size = System::Drawing::Size(100, 22);
			this->E_textBoxTitlu->TabIndex = 1;
			this->E_textBoxTitlu->Visible = false;
			// 
			// E_textBoxGen
			// 
			this->E_textBoxGen->Location = System::Drawing::Point(325, 59);
			this->E_textBoxGen->Name = L"E_textBoxGen";
			this->E_textBoxGen->Size = System::Drawing::Size(100, 22);
			this->E_textBoxGen->TabIndex = 2;
			this->E_textBoxGen->Visible = false;
			// 
			// E_textBoxRegizor
			// 
			this->E_textBoxRegizor->Location = System::Drawing::Point(457, 59);
			this->E_textBoxRegizor->Name = L"E_textBoxRegizor";
			this->E_textBoxRegizor->Size = System::Drawing::Size(100, 22);
			this->E_textBoxRegizor->TabIndex = 3;
			this->E_textBoxRegizor->Visible = false;
			// 
			// E_textBoxAnulLansarii
			// 
			this->E_textBoxAnulLansarii->Location = System::Drawing::Point(593, 59);
			this->E_textBoxAnulLansarii->Name = L"E_textBoxAnulLansarii";
			this->E_textBoxAnulLansarii->Size = System::Drawing::Size(100, 22);
			this->E_textBoxAnulLansarii->TabIndex = 4;
			this->E_textBoxAnulLansarii->Visible = false;
			// 
			// E_textBoxStocDisponibil
			// 
			this->E_textBoxStocDisponibil->Location = System::Drawing::Point(745, 59);
			this->E_textBoxStocDisponibil->Name = L"E_textBoxStocDisponibil";
			this->E_textBoxStocDisponibil->Size = System::Drawing::Size(100, 22);
			this->E_textBoxStocDisponibil->TabIndex = 5;
			this->E_textBoxStocDisponibil->Visible = false;
			// 
			// E_textBoxPretInchiriere
			// 
			this->E_textBoxPretInchiriere->Location = System::Drawing::Point(922, 59);
			this->E_textBoxPretInchiriere->Name = L"E_textBoxPretInchiriere";
			this->E_textBoxPretInchiriere->Size = System::Drawing::Size(100, 22);
			this->E_textBoxPretInchiriere->TabIndex = 6;
			this->E_textBoxPretInchiriere->Visible = false;
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Location = System::Drawing::Point(99, 26);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(20, 16);
			this->ID->TabIndex = 7;
			this->ID->Text = L"ID";
			this->ID->Visible = false;
			// 
			// E_label1
			// 
			this->E_label1->AutoSize = true;
			this->E_label1->Location = System::Drawing::Point(229, 26);
			this->E_label1->Name = L"E_label1";
			this->E_label1->Size = System::Drawing::Size(32, 16);
			this->E_label1->TabIndex = 8;
			this->E_label1->Text = L"Titlu";
			this->E_label1->Visible = false;
			// 
			// E_label2
			// 
			this->E_label2->AutoSize = true;
			this->E_label2->Location = System::Drawing::Point(354, 26);
			this->E_label2->Name = L"E_label2";
			this->E_label2->Size = System::Drawing::Size(32, 16);
			this->E_label2->TabIndex = 9;
			this->E_label2->Text = L"Gen";
			this->E_label2->Visible = false;
			// 
			// E_label3
			// 
			this->E_label3->AutoSize = true;
			this->E_label3->Location = System::Drawing::Point(477, 26);
			this->E_label3->Name = L"E_label3";
			this->E_label3->Size = System::Drawing::Size(54, 16);
			this->E_label3->TabIndex = 10;
			this->E_label3->Text = L"Regizor";
			this->E_label3->Visible = false;
			// 
			// E_label4
			// 
			this->E_label4->AutoSize = true;
			this->E_label4->Location = System::Drawing::Point(601, 26);
			this->E_label4->Name = L"E_label4";
			this->E_label4->Size = System::Drawing::Size(79, 16);
			this->E_label4->TabIndex = 11;
			this->E_label4->Text = L"Anul lansarii";
			this->E_label4->Visible = false;
			// 
			// E_label5
			// 
			this->E_label5->AutoSize = true;
			this->E_label5->Location = System::Drawing::Point(745, 26);
			this->E_label5->Name = L"E_label5";
			this->E_label5->Size = System::Drawing::Size(95, 16);
			this->E_label5->TabIndex = 12;
			this->E_label5->Text = L"Stoc disponibil";
			this->E_label5->Visible = false;
			// 
			// E_label6
			// 
			this->E_label6->AutoSize = true;
			this->E_label6->Location = System::Drawing::Point(925, 26);
			this->E_label6->Name = L"E_label6";
			this->E_label6->Size = System::Drawing::Size(88, 16);
			this->E_label6->TabIndex = 13;
			this->E_label6->Text = L"Pret inchiriere";
			this->E_label6->Visible = false;
			// 
			// E_button1
			// 
			this->E_button1->Location = System::Drawing::Point(468, 108);
			this->E_button1->Name = L"E_button1";
			this->E_button1->Size = System::Drawing::Size(99, 23);
			this->E_button1->TabIndex = 14;
			this->E_button1->Text = L"Modifica";
			this->E_button1->UseVisualStyleBackColor = true;
			this->E_button1->Visible = false;
			this->E_button1->Click += gcnew System::EventHandler(this, &MyForm1::E_button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(567, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Introduceti numele clientului:";
			this->label9->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(560, 102);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(179, 22);
			this->textBox3->TabIndex = 19;
			this->textBox3->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(576, 141);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(149, 16);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Introduceti filmul inchiriat";
			this->label10->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(560, 175);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 22);
			this->textBox4->TabIndex = 21;
			this->textBox4->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(593, 212);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Cauta inchirierea";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(91, 164);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(170, 16);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Introduceti regizorul inchiriat";
			this->label11->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(73, 196);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(188, 22);
			this->textBox5->TabIndex = 24;
			this->textBox5->Visible = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 596);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->E_button1);
			this->Controls->Add(this->E_label6);
			this->Controls->Add(this->E_label5);
			this->Controls->Add(this->E_label4);
			this->Controls->Add(this->E_label3);
			this->Controls->Add(this->E_label2);
			this->Controls->Add(this->E_label1);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->E_textBoxID);
			this->Controls->Add(this->E_textBoxTitlu);
			this->Controls->Add(this->E_textBoxGen);
			this->Controls->Add(this->E_textBoxRegizor);
			this->Controls->Add(this->E_textBoxAnulLansarii);
			this->Controls->Add(this->E_textBoxStocDisponibil);
			this->Controls->Add(this->E_textBoxPretInchiriere);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxNumeFilm);
			this->Controls->Add(this->labelNumeFilm);
			this->Controls->Add(this->buttonCautare);
			this->Controls->Add(this->buttonAdauga);
			this->Controls->Add(this->textBoxPretInchiriere);
			this->Controls->Add(this->textBoxStocDisponibil);
			this->Controls->Add(this->textBoxAnulLansarii);
			this->Controls->Add(this->textBoxRegizor);
			this->Controls->Add(this->textBoxGen);
			this->Controls->Add(this->textBoxTitlu);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->label_ID);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm1";
			this->Text = L"Gava Films";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
			 
			 System::Void E_button1_Click(System::Object^ sender, System::EventArgs^ e) {
				 // Preluare date din text box-uri
				 int id = Int32::Parse(E_textBoxID->Text);
				 String^ titlu = E_textBoxTitlu->Text;
				 String^ gen = E_textBoxGen->Text;
				 String^ regizor = E_textBoxRegizor->Text;
				 int anulLansarii = Int32::Parse(E_textBoxAnulLansarii->Text);
				 int stocDisponibil = Int32::Parse(E_textBoxStocDisponibil->Text);
				 double pretInchiriere = Double::Parse(E_textBoxPretInchiriere->Text);

				 // Modifica film folosind metoda ModificaFilm din clasa Film
				 Film::ModificaFilm(id, titlu, gen, regizor, anulLansarii, stocDisponibil, pretInchiriere);

				 Film::VerificareAsteptare(titlu,regizor,stocDisponibil);


			 }
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (buttonAdauga->Visible)
		{
			button1->Visible = true;
			button2->Visible = true;
			button3->Visible = true;
			button4->Visible = true;

			//ADAUGARE FILM
			textBoxID->Visible = false;
			textBoxTitlu->Visible = false;
			textBoxGen->Visible = false;
			textBoxRegizor->Visible = false;
			textBoxAnulLansarii->Visible = false;
			textBoxStocDisponibil->Visible = false;
			textBoxPretInchiriere->Visible = false;
			buttonAdauga->Visible = false;
			label_ID->Visible = false;
			label7->Visible = false;
			label8->Visible = false;
			label3->Visible = false;
			label4->Visible = false;
			label5->Visible = false;
			label6->Visible = false;


			buttonBack->Visible = false;
		}
		if (E_button1->Visible)
		{
			button1->Visible = true;
			button2->Visible = true;
			button3->Visible = true;
			button4->Visible = true;

			E_textBoxID->Visible = false;
			E_textBoxTitlu->Visible = false;
			E_textBoxGen->Visible = false;
			E_textBoxRegizor->Visible = false;
			E_textBoxAnulLansarii->Visible = false;
			E_textBoxStocDisponibil->Visible = false;
			E_textBoxPretInchiriere->Visible = false;
			ID->Visible = false;
			E_label1->Visible = false;
			E_label2->Visible = false;
			E_label3->Visible = false;
			E_label4->Visible = false;
			E_label5->Visible = false;
			E_label6->Visible = false;
			E_button1->Visible = false;

			buttonBack->Visible = false;
		}
	}
	private: System::Void buttonAdauga_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try {
			// Preluarea valorilor din textBox-uri
			int id = Int32::Parse(textBoxID->Text);
			String^ titlu = textBoxTitlu->Text;
			String^ gen = textBoxGen->Text;
			String^ regizor = textBoxRegizor->Text;
			int anulLansarii = Int32::Parse(textBoxAnulLansarii->Text);
			int stocDisponibil = Int32::Parse(textBoxStocDisponibil->Text);
			double pretInchiriere = Double::Parse(textBoxPretInchiriere->Text);

			// Crearea unui obiect Film și apelarea metodei AdaugaFilm pentru a adăuga filmul
			Film^ film = gcnew Film(id, titlu, gen, regizor, anulLansarii, stocDisponibil, pretInchiriere);
			Film::AdaugaFilm(film);

			Film::VerificareAsteptare(titlu, regizor, stocDisponibil);
		}
		catch (FormatException^ ex) {
			MessageBox::Show("Format incorect. Va rugam sa verificati datele introduse.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("A aparut o eroare: " + ex->Message, "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		//MAIN MENU

		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		button4->Visible = false;
		textBox1->Visible = false;
		button5->Visible = false;
		textBox2->Visible = false;
		textBoxNumeFilm->Visible = false;
		buttonCautare->Visible = false;
		label11->Visible = false;
		textBox5->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		labelNumeFilm->Visible = false;
		
		//ADAUGARE FILM
		textBoxID->Visible = true;
		textBoxTitlu->Visible = true;
		textBoxGen->Visible = true;
		textBoxRegizor->Visible = true;
		textBoxAnulLansarii->Visible = true;
		textBoxStocDisponibil->Visible = true;
		textBoxPretInchiriere->Visible = true;
		buttonAdauga->Visible = true;
		label_ID->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		label6->Visible = true;


		buttonBack->Visible = true;
		
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Afișăm textBox-ul pentru introducerea numelui filmului
		if (textBoxNumeFilm->Visible == false)
		{
			textBoxNumeFilm->Visible = true;
			labelNumeFilm->Visible = true;
			buttonCautare->Visible = true;
			label11->Visible = true;
			textBox5->Visible = true;
		}
		else
		{
			textBoxNumeFilm->Visible = false;
			labelNumeFilm->Visible = false;
			buttonCautare->Visible = false;
			label11->Visible = false;
			textBox5->Visible = false;
		}
		
	}
	
	private: System::Void buttonCautare_Click(System::Object^ sender, System::EventArgs^ e) {
		
	
	if (String::IsNullOrWhiteSpace(textBoxNumeFilm->Text)) {
		MessageBox::Show("Introduceti numele filmului.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (String::IsNullOrWhiteSpace(textBox5->Text)) {
		MessageBox::Show("Introduceti regizorul filmului.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	
	String^ numeFilm = textBoxNumeFilm->Text;
	String^ regizorFilm= textBox5->Text;


	try {
		StreamReader^ cititor = gcnew StreamReader("Filme.txt");
		String^ line;
		while ((line = cititor->ReadLine()) != nullptr) {
			array<String^>^ parts = line->Split(',');
			
			if (parts[1]->Trim() == numeFilm && parts[3]->Trim() == regizorFilm)  {
				
				Film^ filmSelectat = gcnew Film(
					Int32::Parse(parts[0]),
					parts[1],
					parts[2],
					parts[3],
					Int32::Parse(parts[4]),
					Int32::Parse(parts[5]),
					Double::Parse(parts[6])
				);

				AfiseazaDateFilm(filmSelectat);
				//MAIN MENU

				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				textBox1->Visible = false;
				button5->Visible = false;
				textBox2->Visible = false;
				textBoxNumeFilm->Visible = false;
				buttonCautare->Visible = false;
				label11->Visible = false;
				textBox5->Visible = false;
				label1->Visible = false;
				label2->Visible = false;
				labelNumeFilm->Visible = false;

				//EDITARE FILM
				E_textBoxID->Visible = true;
				E_textBoxTitlu->Visible = true;
				E_textBoxGen->Visible = true;
				E_textBoxRegizor->Visible = true;
				E_textBoxAnulLansarii->Visible = true;
				E_textBoxStocDisponibil->Visible = true;
				E_textBoxPretInchiriere->Visible = true;
				ID->Visible = true;
				E_label1->Visible = true;
				E_label2->Visible = true;
				E_label3->Visible = true;
				E_label4->Visible = true;
				E_label5->Visible = true;
				E_label6->Visible = true;
				E_button1->Visible = true;

				buttonBack->Visible = true;
				cititor->Close();
				return;
			}
		}
		cititor->Close();
		MessageBox::Show("Filmul nu a fost gasit.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Eroare la citirea din fisier: " + ex->Message, "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Afișăm textBox-ul pentru introducerea numelui filmului
		if (textBox1->Visible == false)
		{
			textBox1->Visible = true;
			label1->Visible = true;
			textBox2->Visible = true;
			label2->Visible = true;
			button5->Visible = true;
		}
		else
		{
			textBox1->Visible = false;
			label1->Visible = false;
			textBox2->Visible = false;
			label2->Visible = false;
			button5->Visible = false;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (String::IsNullOrWhiteSpace(textBox1->Text)) {
			MessageBox::Show("Introduceti numele clientului.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (String::IsNullOrWhiteSpace(textBox2->Text)) {
			MessageBox::Show("Introduceti numele filmului.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		String^ numeClient = textBox1->Text;
		String^ numeFilm = textBox2->Text;

		// Convertim String^ în std::string
		std::string numeClientStr = msclr::interop::marshal_as<std::string>(numeClient);
		std::string numeFilmStr = msclr::interop::marshal_as<std::string>(numeFilm);

		
		Rezervare rezervare;
		bool rezervareExista = rezervare.CautaRezervare(numeClientStr, numeFilmStr);
		bool filmDisponibil = false;

		
		std::ifstream fisierIn("Filme.txt");
		std::string linie;
		while (std::getline(fisierIn, linie)) {
			std::stringstream ss(linie);
			std::string id, titlu, gen, regizor, anulLansarii, stoc, pret;
			std::getline(ss, id, ','); 
			std::getline(ss, titlu, ',');
			std::getline(ss, gen, ',');
			std::getline(ss, regizor, ',');
			std::getline(ss, anulLansarii, ',');
			std::getline(ss, stoc, ',');
			std::getline(ss, pret, ',');

			if (titlu.find(numeFilmStr) != std::string::npos && std::stoi(stoc) > 0) {
				
				filmDisponibil = true;
				break;
			}
		}
		fisierIn.close();

		String^ text = textBox2->Text; 

		

		
		if (rezervareExista)
		{
			
			Rezervare_DA^ rezervareformular = gcnew Rezervare_DA(numeClient,numeFilm);
			rezervareformular->Rezervareform(true, numeClient, numeFilm);
			rezervareformular->ShowDialog();
		}
		else
		{
			
			Rezervare_NU^ rezervareformular = gcnew Rezervare_NU();
			if (!filmDisponibil) {
				
				rezervareformular->SetNoRezNoFiVisible(false);
			}
			if (filmDisponibil)
			{
				
				rezervareformular->SetNoRezYesFiVisible(false, text);
			}
			rezervareformular->ShowDialog();
		}
		

		
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Visible == false)
		{
			textBox3->Visible = true;
			label9->Visible = true;
			textBox4->Visible = true;
			label10->Visible = true;
			button6->Visible = true;
		}
		else
		{
			textBox3->Visible = false;
			label9->Visible = false;
			textBox4->Visible = false;
			label10->Visible = false;
			button6->Visible = false;
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (String::IsNullOrWhiteSpace(textBox3->Text)) {
		MessageBox::Show("Introduceti numele clientului.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrWhiteSpace(textBox4->Text)) {
		MessageBox::Show("Introduceti numele filmului.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ numeClient1 = textBox3->Text;
	String^ numeFilm1 = textBox4->Text;

	std::string numeClientStr = msclr::interop::marshal_as<std::string>(numeClient1);
	std::string numeFilmStr = msclr::interop::marshal_as<std::string>(numeFilm1);

	Inchiriere inchiriere;
	bool inchiriereExista = inchiriere.CautaInchiriere(numeClientStr, numeFilmStr);

	if (inchiriereExista)
	{
		Rezervare_DA^ inchiriereformular = gcnew Rezervare_DA(numeClient1, numeFilm1);
		inchiriereformular->Inchiriereform(true,numeClient1,numeFilm1);
		inchiriereformular->ShowDialog();
	}
	else
	{
		MessageBox::Show("Nu am gasit inchirierea");
	}

}
};
}
