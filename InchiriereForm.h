#pragma once


#include <msclr/marshal_cppstd.h>
#include "Film.h"
#include "Inchiriere.h"
#include "Chitanta.h"
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
	/// Summary for InchiriereForm
	/// </summary>
	public ref class InchiriereForm : public System::Windows::Forms::Form
	{
	public:
		
		InchiriereForm(String^ id, String^ titlu, String^ gen, String^ regizor, String^ an, String^ stoc, String^ pret)
		{
			InitializeComponent();
			PopulateComboBoxes();

			
			textBox1->Text = id;
			textBox2->Text = titlu;
			textBox3->Text = gen;
			textBox4->Text = regizor;
			textBox5->Text = an;
			textBox6->Text = stoc;
			textBox7->Text = pret;
		}

		

	protected:
		~InchiriereForm()
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
	private: System::Windows::Forms::TextBox^ textBox9;






	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxTotal;
	private: System::Windows::Forms::ComboBox^ comboBoxPlata;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBoxDay;
	private: System::Windows::Forms::ComboBox^ comboBoxMonth;
	private: System::Windows::Forms::ComboBox^ comboBoxYear;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTotal = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxPlata = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxDay = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxMonth = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxYear = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(680, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(680, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(680, 202);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(680, 163);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(680, 240);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(680, 291);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(680, 327);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(49, 67);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(152, 22);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(207, 67);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(127, 22);
			this->textBox9->TabIndex = 8;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(94, 253);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(304, 22);
			this->textBox10->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(94, 297);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(304, 22);
			this->textBox11->TabIndex = 16;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(94, 333);
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
			this->button1->Click += gcnew System::EventHandler(this, &InchiriereForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(464, 452);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Anulare";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InchiriereForm::button2_Click);
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
			this->textBoxTotal->Location = System::Drawing::Point(680, 409);
			this->textBoxTotal->Name = L"textBoxTotal";
			this->textBoxTotal->ReadOnly = true;
			this->textBoxTotal->Size = System::Drawing::Size(100, 22);
			this->textBoxTotal->TabIndex = 21;
			// 
			// comboBoxPlata
			// 
			this->comboBoxPlata->FormattingEnabled = true;
			this->comboBoxPlata->Location = System::Drawing::Point(160, 381);
			this->comboBoxPlata->Name = L"comboBoxPlata";
			this->comboBoxPlata->Size = System::Drawing::Size(121, 24);
			this->comboBoxPlata->TabIndex = 22;
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(303, 202);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 24);
			this->comboBox6->TabIndex = 14;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &InchiriereForm::comboBox6_SelectedIndexChanged_1);
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(176, 202);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 24);
			this->comboBox5->TabIndex = 13;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &InchiriereForm::comboBoxAnLuna_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(49, 202);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 24);
			this->comboBox4->TabIndex = 12;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &InchiriereForm::comboBoxAnLuna_SelectedIndexChanged);
			// 
			// comboBoxDay
			// 
			this->comboBoxDay->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxDay->FormattingEnabled = true;
			this->comboBoxDay->Location = System::Drawing::Point(303, 138);
			this->comboBoxDay->Name = L"comboBoxDay";
			this->comboBoxDay->Size = System::Drawing::Size(121, 24);
			this->comboBoxDay->TabIndex = 11;
			// 
			// comboBoxMonth
			// 
			this->comboBoxMonth->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxMonth->FormattingEnabled = true;
			this->comboBoxMonth->Location = System::Drawing::Point(176, 138);
			this->comboBoxMonth->Name = L"comboBoxMonth";
			this->comboBoxMonth->Size = System::Drawing::Size(121, 24);
			this->comboBoxMonth->TabIndex = 10;
			// 
			// comboBoxYear
			// 
			this->comboBoxYear->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxYear->FormattingEnabled = true;
			this->comboBoxYear->Location = System::Drawing::Point(49, 138);
			this->comboBoxYear->Name = L"comboBoxYear";
			this->comboBoxYear->Size = System::Drawing::Size(121, 24);
			this->comboBoxYear->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(91, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Nume:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(233, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Prenume:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(107, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 16);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Data Inceperii (YYYY/MM/DD):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(123, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Data incheierii (YYYY/MM/DD):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(29, 256);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Telefon: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 300);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Email:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 336);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 16);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Adresa:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 384);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 16);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Modalitate de plata:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(636, 81);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 16);
			this->label10->TabIndex = 32;
			this->label10->Text = L"ID:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(624, 126);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 16);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Film:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(617, 163);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 16);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Regizor:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(624, 208);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(35, 16);
			this->label13->TabIndex = 35;
			this->label13->Text = L"Gen:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(592, 243);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 16);
			this->label14->TabIndex = 36;
			this->label14->Text = L"Anul lansarii:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(617, 297);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 16);
			this->label15->TabIndex = 37;
			this->label15->Text = L"Stoc:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(542, 330);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(117, 16);
			this->label16->TabIndex = 38;
			this->label16->Text = L"Pret inchiriere/luna";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(696, 372);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 16);
			this->label17->TabIndex = 39;
			this->label17->Text = L"TOTAL:";
			// 
			// InchiriereForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 527);
			this->Controls->Add(this->label17);
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
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBoxPlata);
			this->Controls->Add(this->textBoxTotal);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBoxDay);
			this->Controls->Add(this->comboBoxMonth);
			this->Controls->Add(this->comboBoxYear);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"InchiriereForm";
			this->Text = L"InchiriereForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		void PopulateComboBoxes()
		{
			DateTime currentDate = DateTime::Now;
			int currentYear = currentDate.Year;

			comboBoxYear->Items->Add(currentYear);

			for (int year = currentYear; year <= currentYear + 10; year++)
			{
				
				comboBox4->Items->Add(year);
			}

			comboBoxMonth->Items->Add(currentDate.Month);


			for (int month = 1; month <= 12; month++)
			{
				
				comboBox5->Items->Add(month);
			}
			comboBoxDay->Items->Add(currentDate.Day);
			comboBoxPlata->Items->Add("Numerar");
			comboBoxPlata->Items->Add("Card");
			comboBoxPlata->Items->Add("Transfer bancar");
			
			
			UpdateDaysComboBox6(currentYear, 1);
		}

		
		void UpdateDaysComboBox6(int year, int month)
		{
			
			comboBox6->Items->Clear();
			int daysInMonth = DateTime::DaysInMonth(year, month);
			for (int day = 1; day <= daysInMonth; day++)
			{
				
				comboBox6->Items->Add(day);
			}

		}

		


		void ValidateDate()
		{
			DateTime selectedDate(21, 12, 13);
			int selectedYear{}, selectedMonth{}, selectedDay{};
			
			if (comboBox4->SelectedItem != nullptr && comboBox5->SelectedItem != nullptr && comboBox6->SelectedItem != nullptr )
			{
				
				selectedYear = Int32::Parse(comboBox4->SelectedItem->ToString());
				selectedMonth = Int32::Parse(comboBox5->SelectedItem->ToString());
				selectedDay = Int32::Parse(comboBox6->SelectedItem->ToString());
				DateTime selectedDate(selectedYear, selectedMonth, selectedDay);
				if (selectedDate < DateTime::Now.Date)
				{
					MessageBox::Show("Data selectata nu poate fi în trecut.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
					comboBox4->SelectedIndex = -1;
					comboBox5->SelectedIndex = -1;
					comboBox6->SelectedIndex = -1;

				}

				if (selectedYear == DateTime::Now.Year)
				{
					if (selectedMonth == DateTime::Now.Month + 1 && selectedDay < DateTime::Now.Day)
					{
						MessageBox::Show("Data sfarsitului trebuie sa fie mai mare decat data inceperii cu cel putin o luna.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
						comboBox4->SelectedIndex = -1;
						comboBox5->SelectedIndex = -1;
						comboBox6->SelectedIndex = -1;

					}
					if (selectedMonth == DateTime::Now.Month)
					{
						MessageBox::Show("Data sfarsitului trebuie sa fie mai mare decat data inceperii cu cel putin o luna.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
						comboBox4->SelectedIndex = -1;
						comboBox5->SelectedIndex = -1;
						comboBox6->SelectedIndex = -1;

					}
				}
				
			}
			
		}
		
		private: System::Void comboBox6_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
		ValidateDate();
	}
		private: System::Void comboBoxAnLuna_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (comboBox4->SelectedItem != nullptr && comboBox5->SelectedItem != nullptr)
			{
			int selectedYear_1 = Int32::Parse(comboBox4->SelectedItem->ToString());
			int selectedMonth_1 = Int32::Parse(comboBox5->SelectedItem->ToString());
			UpdateDaysComboBox6(selectedYear_1, selectedMonth_1);
			ValidateDate();
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (textBox8->Text == "" || textBox9->Text == "" || textBox10->Text == "" ||
				textBox11->Text == "" || textBox12->Text == "" ||
				comboBox4->SelectedIndex == -1 || comboBox5->SelectedIndex == -1 ||comboBox6->SelectedIndex == -1 ||
				comboBoxYear->SelectedIndex == -1 || comboBoxMonth->SelectedIndex == -1 || comboBoxDay->SelectedIndex == -1 ||comboBoxPlata->SelectedIndex==-1) {
				
				label1->Visible = true;
				return; 
			}
			else
			{
				int newID, nr=0;
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
				

				std::string incep_An = msclr::interop::marshal_as<std::string>(comboBoxYear->Text);
				std::string incep_Luna = msclr::interop::marshal_as<std::string>(comboBoxMonth->Text);
				std::string incep_Zi = msclr::interop::marshal_as<std::string>(comboBoxDay->Text);

				std::string sfarsit_An = msclr::interop::marshal_as<std::string>(comboBox4->Text);
				std::string sfarsit_Luna = msclr::interop::marshal_as<std::string>(comboBox5->Text);
				std::string sfarsit_Zi = msclr::interop::marshal_as<std::string>(comboBox6->Text);


				std::string dataInceperii = incep_An+ "-"+ incep_Luna + "-" + incep_Zi; 
				std::string dataSfarsit = sfarsit_An + "-" + sfarsit_Luna + "-" + sfarsit_Zi; 
				std::string numeFilm = msclr::interop::marshal_as<std::string>(textBox2->Text);
				std::string regizorFilm = msclr::interop::marshal_as<std::string>(textBox4->Text);
				std::string numeClient = msclr::interop::marshal_as<std::string>(textBox8->Text);
				std::string prenumeClient = msclr::interop::marshal_as<std::string>(textBox9->Text);
				std::string telefonClient = msclr::interop::marshal_as<std::string>(textBox10->Text);
				std::string emailClient = msclr::interop::marshal_as<std::string>(textBox11->Text);
				std::string adresaClient = msclr::interop::marshal_as<std::string>(textBox12->Text);

				String^ numeComplet = textBox8->Text + " " + textBox9->Text;
				std::string numecomplet = numeClient + " " + prenumeClient;
				String^ emailComplet = textBox11->Text;
				
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
					textBoxTotal->Text = inchiriere.CalculeazaCostTotal().ToString();
					comboBox4->Enabled = false;
					comboBox5->Enabled = false;
					comboBox6->Enabled = false;
					comboBoxYear->Enabled = false;
					comboBoxMonth->Enabled = false;
					comboBoxDay->Enabled = false;
				}
				else
				{
					sumaPlatita = System::Convert::ToDouble(textBoxTotal->Text);
					
					inchiriere.SalveazaInchiriere();

					Film^ FilmAles = gcnew Film(id, titlu, gen, regizor, anulLansarii, stocDisponibil, pretInchiriere);
					
					FilmAles->SetStocDisponibil(FilmAles->GetStocDisponibil() - 1);

					Film::UpdateStocInFisier(FilmAles);

					Chitanta chitanta(numecomplet,numeFilm,regizorFilm,dataInceperii, dataSfarsit, sumaPlatita, modalitatePlata);

					MessageBox::Show("Inchirierea a fost confirmata si chitanta a fost generata!");

					chitanta.SalvareChitantaInFisier("Factura.txt");

					Film::StergereAsteptare(titlu, regizor, numeComplet,emailComplet);
					this->Close();

					
				}
			}
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
