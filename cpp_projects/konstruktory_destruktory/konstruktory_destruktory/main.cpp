#include <iostream>
#include <string>
#include "event.h"
using namespace std;

int main()
{
	event w1("apolalipsa zombie",6,8,2045,8,15);
	
	w1.show();
	w1.load();
	w1.show();
	return 0;
}
