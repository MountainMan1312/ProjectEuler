/*Project Euler - Problem 001
* Multiples of 3 and 5
* 
* If we list all the natural numbers below 10 that are multiples of 3 or 5,
* we get 3, 5, 6, and 9. The sum of these multiples is 23.
* 
* Find the sum of all the multiples of 3 or 5 below 1000
*/

#include <iostream>

int x = 3;
int y = 5;
int max = 1000;
int runningTab = 0;

int main()
{
	int runningTab = 0;

	for (int i = 0; i < max; ++i)
	{
		if (i % x == 0 || i % y == 0)
		{
			runningTab += i;
		}
	}

	std::cout << runningTab << "\n";
}