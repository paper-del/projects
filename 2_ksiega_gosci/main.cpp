#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;


int main()
{
    string imie ;
    int nr = 1;
    fstream plik;
    plik.open("goscie.txt",ios::out | ios::app);
    cout << "podaj swoje imie: ";cin >> imie ;
    plik << imie << endl;
    plik.close();
    plik.open("goscie.txt",ios::in);
    if(plik.good()== false)
    {
        cout << " nie udalo sie otworzyc pliku";
        exit(0);
    }
    string goscie;
    while(getline(plik,goscie))
    {
        

        cout << "Gosc nr " << nr << ": " << goscie<<endl;
        nr++;

    }
    
}