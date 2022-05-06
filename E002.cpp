/*E002.cpp
* Returns the sum of even fibonacci terms under a maxValue
*/

#include <iostream>
#include "ProjectEuler.h"

int E002(int maxValue)
{
	int fibX = 1;
	int fibY = 2;
	int fibNext = 0;
	int sumOfEvens = 0;

	while (fibY <= maxValue)
	{
		if (fibY % 2 == 0) { sumOfEvens += fibY; } //add current number to sum if it's even

		{ //Increment fibonacci sequence
			fibNext = fibX + fibY;
			fibX = fibY;
			fibY = fibNext;
		}
	}

	return sumOfEvens;
}