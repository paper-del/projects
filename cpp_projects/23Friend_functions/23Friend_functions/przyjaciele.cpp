#include "przyjaciele.h"
#include <iostream>

using namespace std;

Punkt::Punkt(string n, float xx, float yy) : nazwa(n), x(xx), y(yy)
{

}
void Punkt::wczytaj()
{
	cout << "podaj x: "; cin >> x;
	cout << "podaj y: "; cin >> y;
	cout << "nazwa punktu: "; cin >> nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy, float s, float w) : nazwa(n), x(xx), y(yy), szerokosc(s), wysokosc(w)
{
}

void Prostokat::wczytaj()
{
	cout << "podaj x: ";cin >> x;
	cout << "podaj y: "; cin >> y;
	cout << "podaj szerokosc: ";cin >> szerokosc;
	cout << "podaj wysokosc: "; cin >> wysokosc;
	cout << "podaj nazwe: "; cin >> nazwa;
}
