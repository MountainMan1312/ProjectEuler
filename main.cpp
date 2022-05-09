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
#define string std::string //all my homies hate std::string

int(*currentFuncPtr)();

//TEST RESULT AND EXECUTION TIME
void testResult(string problem, int* currentFuncPtr, int answer)
{
	std::cout << problem << " | ";

	//get start time
	int attempt = *currentFuncPtr;         // DOES THIS ACTUALLY RUN THE FUNCTION HERE?
	//get end time                         // OR DOES IT RUN IN main() LIKE I DON'T WANT IT TO?
	//TODO: calculate the time stuff

}

int main()
{

	//In each code block, I need to assign the current problem function to currentFuncPtr.
	//Then I need to send that to testResult, with the arguments, without it actually running.
	//I need it to run in testResult because that's where execution time is being measured.

	{ //PROBLEM 001 - Sum of multiples of 3 or 5 under 1000
		int(*currentFuncPtr)(int, int, int) = &E001(3, 5, 1000); //HEY LOOK AT ME - THIS IS WHERE THE BAD THING HAPPENS!!!
		testResult("001", currentFuncPtr, 233168);
	}

	//The code above produces the follwing errors:
	// - expression must be an lvalue or a functon designator
	// - argument of type "int(*)(int, int, int)" is incompatible with parameter of type "int*"





	// IGNORE EVERYTHING BELOW THIS LINE IT DOESN'T MATTER





	//use this: testResult("", E(), );
	//testResult("001", E001(3, 5, 1000), 233168); //Problem 001 - Sum of multiples of 3 or 5 under 1000
	//testResult("002", E002(4000000), 4613732);   //Problem 002 - Sum of even Fibonacci terms under 4 million
	//testResult("003", E003(600851475143), 6857); //TODO: Problem 003 - Largest Prime Factor of 600851475143


	//std::cout << "PROGRAM COMPLETE - PRESS KEY TO END\n";
	//std::cin.get();

	return 0;
}