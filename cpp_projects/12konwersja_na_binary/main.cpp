#include <iostream>

using namespace std;

void konwertujNaBinarny(int l)
{
    if(l == 0) 
    {
        return;
    }
    
    
    konwertujNaBinarny(l/2);
    cout << l%2;
    
}

int main()
{
    int calkowita=0;
    cout << "podaj liczbe calkowita: ";
    cin >> calkowita;
    while(calkowita<0)
    {
        cout << "liczba nie moze byc mniejsza niz zero zapisz jeszcze raz: ";
        cin >> calkowita;
    }
    cout<<"--- KONWERTER SYSTEMOW LICZBOWYCH ---"<< endl;
    cout<<"Liczba dzieseitna: " << calkowita <<endl;
    cout << "Postac binarna: ";
    konwertujNaBinarny(calkowita);

}