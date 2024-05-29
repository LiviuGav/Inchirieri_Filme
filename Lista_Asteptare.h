#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace Interfataclr {
	public ref class Lista_Asteptare
	{
	public:
       
        String^ Nume;
        String^ Film;
        String^ Regizor;
        String^ Telefon;
        String^ Email;

        Lista_Asteptare( String^ nume, String^ film, String^ regizor,String^ telefon,String^ email);
       
        static void AdaugaAsteptare(Lista_Asteptare^ lista);

       
	};

}