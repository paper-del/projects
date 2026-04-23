#include <iostream>
#include <string>
using namespace std;

int main()
{
    string slowo;
    int liczba_liter;
    cout << "podaj slowo: ";
    cin >>slowo;
    liczba_liter = slowo.length();
    cout << "slowo sklada sie z "<< liczba_liter<<" liter"<<endl;
    for(int i = 0;i<liczba_liter;i++)
    {
        if((slowo[i]>=97) && (slowo[i] <= 122))
        {
            slowo[i] = slowo[i] - 32;
        }
    }
    cout<<slowo;
    
}