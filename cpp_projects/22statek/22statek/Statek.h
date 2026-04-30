#pragma once
#include <iostream>
#include <string>
class Statek
{
	std::string nazwa;
	int energia;
	float predkosc;
public:
	Statek() {};
	Statek(std::string nazwa, int energia);
	~Statek();
	void status();
	void skok_nadprzestrzenny(float dystans);
};
