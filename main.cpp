/*main.cpp
* 
* In this project, I aim to write a function for every Euler problem.
* I intend for each function to be able to take any values, and test
* for the project's values here in the main.
*/

#include <iostream>
#include "ProjectEuler.h"

int main()
{
	std::cout << "001: " << E001(3, 5, 1000) << "\n"; //Problem 001 - Sum of multiples of 3 or 5 under 1000
	std::cout << "002: " << E002(4000000) << "\n";    //Problem 002 - Sum of even-valued Fibonacci terms under 4 million

	return 0;
}

//TODO: Add function to test for correct result