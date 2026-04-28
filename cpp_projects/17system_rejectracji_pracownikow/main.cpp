#include <iostream>
#include <string>

using namespace std;

class Pracownik
{
    public:
    string imie,nazwisko;
    float stawka_godzinowa;
    int przepracowane_godziny;

    void dodajPracownika()
    {
        cout << "prosze podaj imie,nazwisko,stawke godzinowa oraz przepracowane godziny danego pracownika oddzielone spacja" << endl;
        cin >> imie >> nazwisko >> stawka_godzinowa >> przepracowane_godziny;
    }
    
    float obliczWyplate()
    {
        return stawka_godzinowa*przepracowane_godziny;
    }
    void wyswietlProfil()
    {
        cout << "--- KARTA PRACOWNIKA ---" << endl;
        cout << "Pracownik: " << imie << " " << nazwisko << endl;
        cout << "Wyplata w tym miesiacu: " << obliczWyplate() <<" PLN" << endl;
    }

};

int main ()
{
    Pracownik pracownik1;
    Pracownik pracownik2;
    pracownik1.dodajPracownika();
    pracownik2.dodajPracownika();
    pracownik1.wyswietlProfil();
    pracownik2.wyswietlProfil();
}