#pragma once
#include <iostream>

using namespace std;

class Bohater
{
public:
	string imie;
	int hp;

	Bohater(string n, int h)
	{
		imie = n;
		hp = h;
	}
	~Bohater()
	{
		cout << "Bohater " << imie << " zostal usuniety z pamieci" << endl;
	}

};
