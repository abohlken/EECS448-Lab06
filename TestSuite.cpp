#include "TestSuite.h"

TestSuite::TestSuite()
{

}


void TestSuite::runTests()
{
    testSize1();
    testSize2();
    testSize3();
}

void TestSuite::testSize1()
{
    std::cout << "Test 1: Size of empty list is 0: ";
    LinkedListOfInts list;
    if(list.size() == 0)
      std::cout << "Passed!\n";
    else
      std::cout << "Failed!\n";
}

void TestSuite::testSize2()
{
    std::cout << "Test 2: Size of list is 1 after 1 addFront: ";
    LinkedListOfInts list;
    list.addFront(1);
    if(list.size() == 1)
      std::cout << "Passed!\n";
    else
      std::cout << "Failed!\n";
}

void TestSuite::testSize3()
{
    std::cout << "Test 3: Size of list is 1 after 1 addBack: ";
    LinkedListOfInts list;
    list.addBack(1);
    if(list.size() == 1)
      std::cout << "Passed!\n";
    else
      std::cout << "Failed!\n";
}
