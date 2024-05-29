#include "Angajat.h"
#include "MyForm1.h"
#include "MyForm.h"
#include <iostream>
#include <fstream>
using namespace System::IO;
using namespace System::Windows::Forms;

System::Void Interfataclr::Autentificare::AutentificareUtilizator(System::String^ numeUtilizator, System::String^ parolaIntrodusa)
{
    try
    {
        StreamReader^ cititor = gcnew StreamReader("Autentificari.txt");

        array<String^>^ nume = gcnew array<String^>(100);
        array<String^>^ parola = gcnew array<String^>(100);

        int i = 0;
        String^ line;
        while ((line = cititor->ReadLine()) != nullptr)
        {
            array<String^>^ parts = line->Split(',');
            if (parts->Length >= 2)
            {
                nume[i] = parts[0];
                parola[i] = parts[1];
                i++;
            }
        }

        cititor->Close();

        bool autentificareReusita = false;
        for (int j = 0; j < i; j++)
        {
            if (numeUtilizator == nume[j] && parolaIntrodusa == parola[j])
            {
                autentificareReusita = true;
                break;
            }
        }

        if (autentificareReusita)
        {
            MessageBox::Show("Autentificare reusita!");
            
            Interfataclr::MyForm1^ myform1 = gcnew Interfataclr::MyForm1();
            myform1->Show();
        }
        else
        {
            MessageBox::Show("Nume utilizator sau parola introdusa gresit");
           
        }
    }
    catch (Exception^ e)
    {
        Console::WriteLine("Eroare la citirea din fișier: " + e->Message);
    }
}
