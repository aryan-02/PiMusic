// piday.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	int notes[11] = {415, 440, 493, 554, 587, 659, 740, 830, 880, 986, 1108};
	int a = 0;
	string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
	for (char i : pi)
	{
		a++;
		if (a == 2)
		{
			cout << '.';
		}
		stringstream str;
		str << i;
		cout << i;
		int index;
		str >> index;
		Beep(notes[index], 500);
	}
	return 0;
}
