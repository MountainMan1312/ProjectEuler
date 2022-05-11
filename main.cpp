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
#include <chrono>
#include <iomanip>
#include "ProjectEuler.h"
#define string std::string //all my homies hate std::string

//TEST RESULTS AND EXECUTION TIME
void testResult(string problem, int testFunc, int answer)
{
	std::cout << problem << " | ";

	auto startTime = std::chrono::system_clock::now(); //Start execution time test
	auto result = testFunc;                            //Run submitted function
	auto endTime = std::chrono::system_clock::now();   //End execution time test
	
	//Calculate execution time
	std::chrono::duration<double> elapsed_seconds = endTime - startTime;
	std::cout << std::setprecision(8) << std::fixed << elapsed_seconds.count() << " s" << " | ";

	//Correct or incorrect? Print results.
	if (result == answer) { std::cout << "CORRECT   | " << result << "\n"; }
	else { std::cout << "INCORRECT | " << result << "\n"; }
}

int main()
{
	{ //PROBLEM 001 - Sum of multiples of 3 or 5 under 1000
		auto func = +[]() { return E001(3, 5, 1000); };
		testResult("001", func(), 233168);
	}

	{ //PROBLEM 002 - Sum of even Fibonacci terms under 4 million
		auto func = +[]() { return E002(4000000); };
		testResult("002", func(), 4613732);
	}
	
	{ //PROBLEM 003 - Largest Prime Factor of 600851475143
		auto func = +[]() { return E003(600851475143); };
		testResult("003", func(), 6857);
	}

	//Really this is just here to keep all that crap from showing at the end
	std::cout << "TESTS COMPLETE\n";
	std::cin.get();

	return 0;
}