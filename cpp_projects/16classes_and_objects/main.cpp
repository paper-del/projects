#include <iostream>

using namespace std;

class Samochody
{
    public:

    string marka;
    string model;
    int rocznik;
    int przebieg;

    void wczytaj()
    {
        cout << "podaj dane marka model rocznik i przebieg oddzielone spacja: ";
        cin >> marka >>model >> rocznik >> przebieg;
    }

    void wypisz()
    {
        cout << "To jest " << marka <<" "<< model <<" z roku " << rocznik << " przebieg " << przebieg;
    }
};

int main()
{
    Samochody auto1;
    auto1.wczytaj();
    auto1.wypisz();
    return 0;
}