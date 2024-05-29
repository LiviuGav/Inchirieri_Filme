#pragma once

#include "Lista_Asteptare.h"
namespace Interfataclr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Lista_Asteptare
	/// </summary>
	public ref class Asteptare : public System::Windows::Forms::Form
	{
	public:
		Asteptare(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void Lista(bool viz)
		{
			label1->Visible = viz;
			label2->Visible = viz;
			label3->Visible = viz;
			label4->Visible = viz;
			label5->Visible = viz;
			textBox1->Visible = viz;
			textBox2->Visible = viz;
			textBox3->Visible = viz;
			textBox4->Visible = viz;
			textBox5->Visible = viz;
			button1->Visible = viz;
			listBox1->Visible = !viz;

		}
		void ListBox(String^ client)
		{
			
			listBox1->Items->Add(client);
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Asteptare()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox5;
	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox1;
	 Lista_Asteptare^ lista;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBox1;
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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(213, 238);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 22);
			this->textBox5->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(213, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 22);
			this->textBox3->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(213, 194);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 22);
			this->textBox4->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(213, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 22);
			this->textBox1->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(244, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 26);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Adauga";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Asteptare::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(213, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 22);
			this->textBox2->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(134, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 16);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Nume:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(145, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Film:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Location = System::Drawing::Point(134, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Regizor";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(134, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Telefon:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(136, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Email:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(1, -2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(647, 532);
			this->listBox1->TabIndex = 27;
			this->listBox1->Visible = false;
			// 
			// Asteptare
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 529);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->listBox1);
			this->Name = L"Asteptare";
			this->Text = L"Lista_Asteptare";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ nume = textBox1->Text;
			String^ film = textBox2->Text;
			String^ regizor = textBox3->Text;
			String^ telefon = textBox4->Text;
			String^ email = textBox5->Text;
			
			Lista_Asteptare^ lista = gcnew Lista_Asteptare(nume, film, regizor, telefon, email);
			Lista_Asteptare::AdaugaAsteptare(lista);
			this->Close();
		}
		catch (FormatException^ ex) {
			MessageBox::Show("Format incorect. Va rugam sa verificati datele introduse.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("A aparut o eroare: " + ex->Message, "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
