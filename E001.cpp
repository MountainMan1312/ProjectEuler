/*E001.cpp
* Returns the sum of multiples of mulX and mulY, up to the maxValue
*/

#include <iostream>
#include "ProjectEuler.h"

int E001(int mulX, int mulY, int maxValue)
{
	int runningTab = 0;

	for (int i = 0; i < maxValue; ++i) //for every number under maxValue
	{
		if (i % mulX == 0 || i % mulY == 0) //if number is divisible by X or Y
		{ 
			runningTab += i; //add number to the running tab
		};
	}

	return runningTab;
}