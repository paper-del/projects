#include <iostream>

using namespace std;



void suma()
{
    int dni;
    float wszystkie = 0;
    cout << "ile dni zamierzasz oszczedzac pieniadze: ";
    cin >> dni;
    float *tablica;
    tablica = new float [dni];
    float *wskaznik = tablica;
    for(int i = 0; i<dni; i++)
    {
        cout<<"dzien "<<i+1<<": ";
        cin >> *wskaznik;
        wszystkie+= (float)*wskaznik;
        wskaznik++;

    }
    cout<<"calkowita kwota to: " <<wszystkie;
    delete [] tablica;
}

int main()
{
   suma();
   return 0;
}