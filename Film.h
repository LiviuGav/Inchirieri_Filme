#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace Interfataclr {
    public ref class Film
    {
    public:
        int ID;
        String^ Titlu;
        String^ Gen;
        String^ Regizor;
        int AnulLansarii;
        int StocDisponibil;
        double PretInchiriere;

        // Constructor
        Film(int id, String^ titlu, String^ gen, String^ regizor, int anulLansarii, int stocDisponibil, double pretInchiriere);
        static void AdaugaFilm(Film^ film);
        static void ModificaFilm(int id, String^ titlu, String^ gen, String^ regizor, int anulLansarii, int stocDisponibil, double pretInchiriere);
        static void UpdateStocInFisier(Film^ film);
        static void VerificareAsteptare(String^ filmselectat, String^ regizorFilm, int stoc);
        static void StergereAsteptare(String^ filmselectat, String^ regizorFilm,String^ client,String^ emailComplet);

        int GetID() { return ID; }
        String^ GetTitlu() { return Titlu; }
        String^ GetGen() { return Gen; }
        String^ GetRegizor() { return Regizor; }
        int GetAnulLansarii() { return AnulLansarii; }
        int GetStocDisponibil() { return StocDisponibil; }
        double GetPretInchiriere() { return PretInchiriere; }

        void SetID(int id) { ID = id; }
        void SetTitlu(String^ titlu) { Titlu = titlu; }
        void SetGen(String^ gen) { Gen = gen; }
        void SetRegizor(String^ regizor) { Regizor = regizor; }
        void SetAnulLansarii(int anulLansarii) { AnulLansarii = anulLansarii; }
        void SetStocDisponibil(int stocDisponibil) { StocDisponibil = stocDisponibil; }
        void SetPretInchiriere(double pretInchiriere) { PretInchiriere = pretInchiriere; }
    };
}
