#include <string>
#include <iostream>

using namespace std;

class Uzytkownik
{
public:

	string login;
	string haslo;

	void zarejestruj();
	bool sprawdzHaslo(string proba_hasla);
};

