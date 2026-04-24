#include <iostream>

using namespace std;

int populacja(int mies)
{
    if((mies == 1) || (mies == 2)) return 1;
    else return populacja(mies-1)+populacja(mies-2);
}
int main()
{
    int miesiac;
    cout<<"podaj numer miesiaca: "; cin >> miesiac;
    while (miesiac<1)
    {
        cout << "liczba musi byc wieksza od jeden podaj jeszcze raz: ";cin >> miesiac;
}
    cout << "--- SYMULATOR ROZWOJU POPULACJI ---" << endl;
    cout << "Wybrany miesiac: " << miesiac << endl;
    cout << "Obliczona wielkosc populacji: " << populacja(miesiac)<<" osobnikow";
}