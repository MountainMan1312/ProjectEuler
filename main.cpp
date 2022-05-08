/*main.cpp
* In this project, I aim to write a function for every Euler problem.
* I intend for each function to be able to take any values, and test for the project's values here in the main.
* Project Euler can be found at https://projecteuler.net/
* It is recommended to avoid looking at other people's solutions until after you've tried it yourself.
*/


/*EXPANSIONS TO PROJECT EULER TO MAKE IT MORE INTERESTING
* So far, here's what I've done:
* - Brought all the problems into a single project
*	- Each problem gets its own file, in the format EXXX, where XXX = problem number
* 
* Future plans:
* TODO: Add result-testing
*	- Compare results from submitted functions to the correct answer
* 
* TODO: Add run-time testing
*	- Test to see if submission runs within the suggested time (1 minute)
* 
* TODO: Add multiple-submission functionality
* 
* TODO: Add multi-threading
*	- Each problem / submission gets its own thread (I guess? I don't know anything yet)
* 
* TODO: Add reporting
*	- Generate a report of results, run-times, etc.
*/

#include <iostream>
#include "ProjectEuler.h"

int main()
{
	std::cout << "001: " << E001(3, 5, 1000) << "\n";   //Problem 001 - Sum of multiples of 3 or 5 under 1000
	std::cout << "002: " << E002(4000000) << "\n";      //Problem 002 - Sum of even-valued Fibonacci terms under 4 million
	std::cout << "003: " << E003(600851475143) << "\n"; //TODO: Problem 003 - Largest Prime Factor of 600851475143

	return 0;
}