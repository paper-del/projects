#include <iostream>
#include "Statek.h"
#include <string>

using namespace std;

Statek::Statek(string n, int e) : nazwa(n), energia(e)
{
	predkosc = 0.0;
	cout << "Statek " << nazwa << " gotowy do startu!" << endl;
}
Statek::~Statek()
{
	cout << "Statek " << nazwa << "ulegl autodestrukcji... " << endl;
}
void Statek::skok_nadprzestrzenny(float dystans)
{
	if (energia > dystans * 2)
	{
		energia = energia - dystans * 2;
		predkosc += 100;
	}
	else
		cout << "Brak energi na skok";
}
void Statek::status()
{
	cout << "stetek " << nazwa << " aktualnie ma " << energia << " energi" << endl;	
}