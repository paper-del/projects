#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    int pomiary[20];
    int i=0;
    int naj= (-400);
    float srednia=0;
    fstream plik;
    plik.open("pomiary.txt",ios::in);
    if(plik.good()== false)
    {
        cout << "Błąd: Nie mozna odczytac pliku pomiary.txt";
        exit(0);
    }
    while(!plik.eof())
    {
       
        plik >> pomiary[i];
        i++;
    }
    for (int j =0;j<=i-1;j++)
    {
        srednia += pomiary[j];
        if(naj<pomiary[j])
            naj = pomiary[j];
    }
    srednia = srednia / (i);
    plik.close();
    plik.open("raport.txt",ios::out);
    plik<<"--- RAPORT POGODOWY ---" <<endl<<"Ilosc pomiarow: " << i<<endl<< "Srednia temperatura: "<<srednia<<endl<<"Najwyzsza temperatura: "<<naj;
    plik.close();
    return(0);

}