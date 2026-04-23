#include <iostream>

using namespace std;

void najwieksza()
{
    float *tablica;
    tablica = new float [3];
    float *tab = tablica;
    float max;
    cout<<"podaj 3 liczby: "<<endl;
    cout << "1: ";
    cin >> *tab;
    max = tablica[0];
    tab++;
    for(int i = 1; i<3; i++)
    {
        cout << i+1 << ": ";
        cin >> *tab;
        if(max < *tab)
        {
            max = (float)*tab;
        }
        tab++;
        
    }
    cout << "najwieksza liczba to: " << max;
    delete [] tablica;
    tablica = nullptr;
}

int main()
{
    najwieksza();
}