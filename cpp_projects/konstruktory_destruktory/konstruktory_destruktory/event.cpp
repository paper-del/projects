#include "event.h"
#include <iostream>

using namespace std;

void event::load()
{
	cout << endl << "nazwa wydarzenia: ";
	cin >> name;
	cout << endl << "dzien: ";
	cin >> day;
	cout << endl << "miesiac: ";
	cin >> month;
	cout << endl << "rok: ";
	cin >> year;
	cout << endl << "godzina: ";
	cin >> hour;
	cout << endl << "minuta: ";
	cin >> minutes;
}

void event::show()
{
	cout <<endl <<  name << endl << day << endl << month << endl << year << endl << hour << endl << minutes << endl;
}

event::event(string n, int d, int m, int y, int h, int mins)
{
	name = n;
	day = d;
	month = m;
	year = y;
	hour = h;
	minutes = mins;
}
event::~event()
{
	cout << endl << "to ja destruktor";
}
