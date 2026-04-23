#include <iostream>

using namespace std;
bool sprawdzParzystosc(int liczba)
{
    if(liczba%2==0)
        return true;
    else
        return false;
}
void generujRaport(int a,int b,int c)
{
    int suma=a+b+c;
    string raport;
    if (sprawdzParzystosc(suma))
        raport = "TAK";
    else
        raport ="NIE";

    cout <<"--- RAPORT MATEMATYCZNY ---"<<endl;
    cout <<"Wprowadzone liczby: "<<a<<", "<<b<<", "<<c<<endl;
    cout <<"Suma liczb: "<<suma<<endl;
    cout <<"Parzystosc sumy: "<<raport;
}
int main()
{
    int pierwsza,druga,trzecia;
    cout<<"podaj 3 liczby"<<endl;
    cout<<"1 liczba: "; cin >> pierwsza;
    cout << "2 liczba: "; cin >> druga;
    cout << "3 liczba: "; cin >> trzecia;
    generujRaport(pierwsza,druga,trzecia);
}