#include <iostream>

using namespace std;

void sortowanie(float *tab,int n)
{
    bool swapped;
    for (int i = 0; i< n-1;i++)
    {
        swapped = false;
        for (int j = 0; j < n-1; j++)
        {
            if (tab[j]<tab[j+1])
            {
                swap(tab[j],tab[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main()
{
    int gracze;
    cout << "podaj liczbe graczy w turnieju: ";cin >> gracze;
    float *tablica;
    tablica = new float [gracze];
    float  *wskaznik = tablica;
    for (int i = 0; i <= gracze-1; i++)
    {
        cout << "podaj wynik " << i+1 << "gracza: ";
        cin >> *wskaznik;
        wskaznik++;
    }
    sortowanie(tablica,gracze);
    cout << "--- OFICJALNY RANKING TURNIEJU ---"<<endl;
    for(int i = 0; i <= gracze - 1; i++)
    {
        cout << "Miejsce " << i + 1 << ": " << (float)tablica[i] <<" pkt" << endl;
    }

    delete [] tablica;
    tablica = nullptr;
}