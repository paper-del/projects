#pragma once
#include <iostream>

using namespace std;

class event
{


	int day, month, year;
	int hour, minutes;
	string name;

public:
	
	event(string,int,int,int,int,int);
	~event();
	void load();
	void show();
};

