#include <iostream>

using namespace std;

int* polaczTablice(int *tab1,int roz1, int *tab2,int roz2)
{
    int *cala;
    cala = new int [roz1+roz2];
    int *wcala = cala;
    for (int i = 0; i<roz1; i++)
    {
        *wcala = tab1[i];
        wcala++;
    }
    for (int i = 0; i<roz2; i++)
    {
        *wcala = tab2[i];
        wcala++;
    }
    return cala;

}

int main()
{
    int pierwsza,druga;
    cout << "podaj rozmiar 1 tablicy: ";cin >> pierwsza;
    cout << "podaj rozmiar 2 tablicy: ";cin >> druga;
    int *tabA,*tabB;
    tabA = new int [pierwsza];
    tabB = new int [druga];
    int *pier = tabA;
    int *drug = tabB;
    cout << "podaj liczby do 1 tablicy" << endl;
    for (int i = 0; i<pierwsza; i++)
    {
        cin >> *pier;
        pier++;
    }
    cout << "teraz 2 tablica: " << endl;
    for (int i = 0; i<druga; i++)
    {
        cin >> *drug;
        drug++;
    }
    int *tabWynikowa = polaczTablice(tabA,pierwsza,tabB,druga);
    for(int i = 0;i<pierwsza+druga;i++)
    {
        cout<<tabWynikowa[i]<<endl;
    }
    delete [] tabA;
    delete [] tabB;
    delete [] tabWynikowa;
    tabA = nullptr;
    tabB = nullptr;
    tabWynikowa = nullptr;
}