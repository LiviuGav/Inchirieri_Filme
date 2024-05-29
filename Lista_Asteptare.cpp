#include "Lista_Asteptare.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace System::IO;
using namespace System::Windows::Forms;
namespace Interfataclr {
 
    Lista_Asteptare::Lista_Asteptare(String^ nume, String^ film, String^ regizor, String^ telefon, String^ email)
        : Nume(nume), Film(film),  Regizor(regizor), Telefon(telefon), Email(email)
    {
    }

    
    void Lista_Asteptare::AdaugaAsteptare(Lista_Asteptare^ lista)
    {
        
        try {
            StreamWriter^ scriitor = gcnew StreamWriter("Lista_Asteptare.txt", true);
            scriitor->WriteLine(lista->Nume + "," + lista->Film + "," + lista->Regizor + "," + lista-> Telefon + "," + lista->Email);
            scriitor->Close();

            MessageBox::Show("Persoana a fost adaugata cu succes pe lista de asteptare!", "Succes", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ ex) {
            MessageBox::Show("A aparut o eroare: " + ex->Message, "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    
    

}

