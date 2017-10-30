#ifndef TESTSUITE_H
#define TESTSUITE_H

#include "LinkedListOfInts.h"
#include <iostream>

class TestSuite
{
	private:
	public:
            /** @pre none
             *  @post LinkedListOfInts object created
             */
            TestSuite();

            /** @pre none
             *  @post all tests are run
             */
            void runTests();
						
            /** @pre none
             *  @post tests that size of empty list returns 0
             */
            void testSize1();

            /** @pre none
             *  @post tests that size of list is 1 after 1 addFront
             */
            void testSize2();

            /** @pre none
             *  @post tests that size of list is 1 after 1 addBack
             */
            void testSize3();
};
#endif
