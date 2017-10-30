/**
*	@author Alex Bohlken
*	@date 10/30/17
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "TestSuite.h"

int main(int argc, char** argv)
{
	TestSuite myTester;

	std::cout << "Running tests!\n";
	myTester.runTests();
	std::cout<<"Tests complete!\n";

	return (0);

}
