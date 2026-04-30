#include <iostream>
#include "Sejf.h"

using namespace std;

void Sejf::ustawSzyfr(int s)
{
	szyfr = s;

}

void Sejf::otworzSejf(int proba)
{
	if (proba == szyfr)
		cout << "Sejf otwarty";
	else
		cout << "Alarm! Zle haslo";
}