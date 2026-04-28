#include "Uzytkownik.h"
#include <iostream>
#include <string>

using namespace std;

void Uzytkownik::zarejestruj()
{
	cout << "podaj login i haslo oddzielone spacja: " << endl;
	cin >> login >> haslo;
}

bool Uzytkownik::sprawdzHaslo(string proba_hasla)
{
	if (proba_hasla == haslo)
		return true;
	else
		return false;
}
