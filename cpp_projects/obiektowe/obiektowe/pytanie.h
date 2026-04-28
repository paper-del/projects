#include <iostream>

using namespace std;

class Pytanie
{
public:

    string tresc, a, b, c, d;
    int numer_pytania;
    string poprawna;
    string odpowiedz;
    int punkt;

    void wczytaj(); // wczytuje pytania z pliku
    void zadaj(); // pokazuje pytanie, czyta odpowiedz
    void sprawdz();

};