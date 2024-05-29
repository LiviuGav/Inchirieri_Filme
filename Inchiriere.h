
#pragma once
#include <string>
#include <ctime>

class Inchiriere {
private:
    int idInchiriere;
    std::string dataInceperii;
    std::string dataSfarsit;
    std::string titluFilm;
    std::string regizor;
    double pret;
    std::string numeClient;
    std::string prenumeClient;
    std::string telefonClient;
    std::string emailClient;
    std::string adresaClient;

public:
    Inchiriere()
    {

    }

    Inchiriere(int id, std::string start, std::string end, std::string titlu,std::string regizorfilm ,double price, std::string nume,
        std::string prenume, std::string telefon, std::string email, std::string adresa)
        : idInchiriere(id), dataInceperii(start), dataSfarsit(end), titluFilm(titlu), regizor(regizorfilm),pret(price),
        numeClient(nume), prenumeClient(prenume), telefonClient(telefon), emailClient(email), adresaClient(adresa) {}

    // Gets si Sets
    int GetID() const { return idInchiriere; }
    void SetID(int id) { idInchiriere = id; }

    std::string GetDataInceperii() const { return dataInceperii; }
    void SetDataInceperii(std::string start) { dataInceperii = start; }

    std::string GetDataSfarsit() const { return dataSfarsit; }
    void SetDataSfarsit(std::string end) { dataSfarsit = end; }

    std::string GetTitluFilm() const { return titluFilm; }
    void SetTitluFilm(std::string titlu) { titluFilm = titlu; }

    std::string GetRegizor() const { return regizor; }
    void SetRegizorFilm(std::string Regizor) { regizor = Regizor; }

    double GetPret() const { return pret; }
    void SetPret(double price) { pret = price; }

    std::string GetNumeClient() const { return numeClient; }
    void SetNumeClient(std::string nume) { numeClient = nume; }

    std::string GetPrenumeClient() const { return prenumeClient; }
    void SetPrenumeClient(std::string prenume) { prenumeClient = prenume; }

    std::string GetTelefonClient() const { return telefonClient; }
    void SetTelefonClient(std::string telefon) { telefonClient = telefon; }

    std::string GetEmailClient() const { return emailClient; }
    void SetEmailClient(std::string email) { emailClient = email; }

    std::string GetAdresaClient() const { return adresaClient; }
    void SetAdresaClient(std::string adresa) { adresaClient = adresa; }

    double CalculeazaCostTotal() const;

    std::string GetInfoInchiriere() const;

    void SalveazaInchiriere() const;

    bool CautaInchiriere(const std::string& numeClient, const std::string& numeFilm);
};
