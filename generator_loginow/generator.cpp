#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dane;
    int liczba;
    cout << "Wprowadz imie i nazwisko: ";
    getline(cin,dane);
    liczba = dane.length();
    for(int i = 0; i < liczba;i++)
    {
        if((dane[i] >= 97) && (dane[i] <= 122))
            dane[i] = dane[i] - 32;
        else if(dane[i] == ' ')
            dane[i] = '_';
    }
    cout << "--- SYSTEM GENEROWANIA KONT ---"<<endl;
    cout << "Liczba znakow w nazwie: "<<liczba<<endl;
    cout << "Wygenerowany login: "<<dane;
    return(0);
}