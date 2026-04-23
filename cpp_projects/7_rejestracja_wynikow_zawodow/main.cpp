#include <iostream>

using namespace std;

float znajdzZwyciezce(float* tab,int rozmiar)
{
    float naj=0;
    for (int i = 0; i<rozmiar;i++)
    {
        if(tab[i]>naj)
        {
            naj = tab[i];
            
        }
    }
    return naj;
}

int main()
{
    int zawodnik;
    cout << "podaj liczbe zawodnikow w zawodach: ";
    cin >> zawodnik;
    float *tablica;
    tablica = new float [zawodnik];
    float *wskaznik = tablica;
    for(int i = 0; i < zawodnik; i++)
    {
        cout << "podaj wyniki punktowe "<< i+1 <<" zawodnika: ";
        cin >> *wskaznik;
        wskaznik++;

    }
    cout << "--- WYNIKI ZAWODOW ---"<<endl;
    cout<<"Liczba startujacych: "<<zawodnik<<endl;
    cout << "Najlepszy wynik: " << znajdzZwyciezce(tablica,zawodnik)<<" pkt";

    delete [] tablica;
    tablica = nullptr;
}