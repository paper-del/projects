#include <iostream>
#include "Statek.h"
#include <string>
#include <time.h>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	srand(time(NULL));
	int a = 0;
	string b;
	cout << "ile chcesz stworzyc statkow: ";cin >> n;
	Statek** tablica = new Statek*[n];
	for (int i = 0;i < n;i++)
	{	
		a = rand() % 300 + 100;
		tablica[i] = new Statek("statek" + to_string(i + 1), a);
	}
	for (int i = 0;i < n;i++)
	{
		tablica[i]->skok_nadprzestrzenny(50);
		tablica[i]->status();
	}
		for (int i = 0;i < n;i++)
	{
			delete tablica[i];
	}
	delete[] tablica;



}