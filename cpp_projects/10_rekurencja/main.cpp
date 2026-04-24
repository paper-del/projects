#include <iostream>

using namespace std;
long long potegowanie(int licz,int pot)
{
    if (pot == 0) return 1;
    else return licz*potegowanie(licz,pot-1);
}
int main()
{
    int liczba,potega;
    cout << "podaj liczbe oraz jej potege: " << endl;
    cout << "liczba: " ; cin >> liczba;
    cout << "potega: " ; cin >>  potega;
    cout << potegowanie(liczba,potega);
}