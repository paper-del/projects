#include <iostream>

using namespace std;

int main()
{
    int tablica[6] = {7,5,4,9,1,3};
    int nowa[6];
    bool swapped;
    for (int i = 0; i<6; i++)
    {
        swapped = false;
        for (int j=0; j<6; j++)
        {
            if(tablica[j]>tablica[j+1])
            {
                swap(tablica[j],tablica[j+1]);
                swapped=true;
            }
        }
        if (!swapped)
            break;
    }
    for (int i = 0; i<6; i++)
    {
        cout << tablica[i];
    }
}