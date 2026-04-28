#include <iostream>
#include "Uzytkownik.h"
#include <string>
using namespace std;

int main()
{
	string dane;
	Uzytkownik u1;
	u1.zarejestruj();
	cout << "Konto utworzone! Podaj haslo, aby sie zalogowac:" << endl;cin >> dane;
	if (u1.sprawdzHaslo(dane))
		cout << "Dostep przyznany.";
	else
		cout << "Odmowa dostepu. Nieprawidlowe haslo.";
}