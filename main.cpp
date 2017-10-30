/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "TestSuite.h"

int main(int argc, char** argv)
{
	TestSuite myTester;
	myTester.runTests();

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";
	
	return (0);

}

