#ifndef TESTSUITE_H
#define TESTSUITE_H

#include "LinkedListOfInts.h"
#include <iostream>

class TestSuite
{
	private:
            LinkedListOfInts testableList;
	public:
            /** @pre none
             *  @post LinkedListOfInts object created
             */
            TestSuite();
            
            /** @pre none
             *  @post all tests are run
             */
            void runTests();
};
#endif
