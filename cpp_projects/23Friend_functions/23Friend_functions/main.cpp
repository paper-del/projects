#include <iostream>
#include "przyjaciele.h"
#include <string>

using namespace std;

void sedzia(Punkt pkt, Prostokat p)
{
	if ((pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc) && (pkt.y >= p.y) && (pkt.y <= p.y + p.wysokosc))
		cout << endl << "Punkt " << pkt.nazwa << " nalezy do prostokata: " << p.nazwa;
	else
		cout << endl << "Punkt " << pkt.nazwa << " nie nalezy do prostokata: " << p.nazwa;
}

int main()
{
	Punkt pkt1("A",3,19);
	Prostokat p1("Prostokat", 0, 0, 6, 4);
	
	sedzia(pkt1, p1);
}