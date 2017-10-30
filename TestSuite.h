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

            /** @pre none
             *  @post tests that size of list is correct after multiple addFronts
             */
            void testSize4();

            /** @pre none
             *  @post tests that size of list is correct after multiple addBacks
             */
            void testSize5();

            /** @pre none
             *  @post tests the isEmpty function for both where the list is empty and where it's not empty
             */
            void testEmpty();

            /** @pre none
             *  @post tests the search function where list is empty
             */
            void testSearch1();

            /** @pre none
             *  @post tests the search function where list is not empty but value not in list
             */
            void testSearch2();

            /** @pre none
             *  @post tests the search function where list is not empty and value is in list
             */
            void testSearch3();

            /** @pre none
             *  @post tests that the removeFront function returns false on empty list
             */
            void testRemove1();

            /** @pre none
             *  @post tests that the removeBack function returns false on empty list
             */
            void testRemove2();

            /** @pre none
             *  @post tests that the removeFront function returns true on nonempty list
             */
            void testRemove3();

            /** @pre none
             *  @post tests that the removeBack function returns true on nonempty list
             */
            void testRemove4();
};
#endif
