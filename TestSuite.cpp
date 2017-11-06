#include "TestSuite.h"

TestSuite::TestSuite()
{

}


void TestSuite::runTests()
{
    testSize1();
    testSize2();
    testSize3();
    testSize4();
    testSize5();
    testEmpty();
    testSearch1();
    testSearch2();
    testSearch3();
    testRemove1();
    testRemove2();
    testRemove3();
    testRemove4();
    testRemove5();
    testRemove6();
    testAdd1();
    testAdd2();
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

void TestSuite::testSize4()
{
    std::cout << "Test 4: Size of list is correct after multiple addFronts: ";
    LinkedListOfInts list;
    for(int i=0;i<1000;i++)
      list.addFront(1);
    if(list.size() == 1000)
      std::cout << "Passed!\n";
    else
      std::cout << "Failed!\n";
}

void TestSuite::testSize5()
{
    std::cout << "Test 5: Size of list is correct after multiple addBacks: ";
    LinkedListOfInts list;
    for(int i=0;i<1000;i++)
      list.addBack(1);
    if(list.size() == 1000)
      std::cout << "Passed!\n";
    else
      std::cout << "Failed!\n";
}

void TestSuite::testEmpty()
{
    std::cout << "Test 6: isEmpty returns true on empty list: ";
    LinkedListOfInts list;
    if(list.isEmpty())
      std::cout << "Passed!\n";
    else
      std::cout << "Failed!\n";

    std::cout << "Test 7: isEmpty returns false on list with size greater than 0: ";
    for(int i=0;i<10;i++)
      list.addBack(1);
    if(list.isEmpty())
      std::cout << "Failed!\n";
    else
      std::cout << "Passed!\n";
}

void TestSuite::testSearch1()
{
    std::cout <<"Test 8: search returns false on empty list: ";
    LinkedListOfInts list;
    if(list.search(1))
      std::cout << "Failed!\n";
    else
      std::cout << "Passed!\n";
}

void TestSuite::testSearch2()
{
    std::cout <<"Test 9: search returns false on populated list where value is not in list: ";
    LinkedListOfInts list;
    for(int i=0;i<100;i++)
      list.addBack(i);
    if(list.search(101))
      std::cout << "Failed!\n";
    else
      std::cout << "Passed!\n";
}

void TestSuite::testSearch3()
{
    std::cout <<"Test 9: search returns true on populated list where value is in list: ";
    LinkedListOfInts list;
    for(int i=0;i<100;i++)
      list.addBack(i);
    if(list.search(50))
      std::cout << "Passed!\n";
    else
      std::cout << "Failed!\n";
}

void TestSuite::testRemove1()
{
  std::cout << "Test 10: removeFront returns false on empty list: ";
  LinkedListOfInts list;
  if(list.removeFront())
    std::cout << "Failed!\n";
  else
    std::cout << "Passed\n";
}

void TestSuite::testRemove2()
{
  std::cout << "Test 11: removeBack returns false on empty list: ";
  LinkedListOfInts list;
  if(list.removeBack())
    std::cout << "Failed!\n";
  else
    std::cout << "Passed\n";
}

void TestSuite::testRemove3()
{
  std::cout << "Test 12: removeFront returns true on nonempty list: ";
  LinkedListOfInts list;
  for(int i=0;i<10;i++)
    list.addFront(i);
  if(list.removeFront())
    std::cout << "Passed!\n";
  else
    std::cout << "Failed!\n";
}

void TestSuite::testRemove4()
{
  std::cout << "Test 13: removeBack returns true on nonempty list: ";
  LinkedListOfInts list;
  for(int i=0;i<10;i++)
    list.addFront(i);
  if(list.removeBack())
    std::cout << "Passed!\n";
  else
    std::cout << "Failed!\n";
}

void TestSuite::testRemove5()
{
  std::cout << "Test 14: size is still good after removing elements with removeFront: ";
  LinkedListOfInts list;
  for(int i=0;i<10;i++)
    list.addFront(i);
  int temp = list.size();
  list.removeFront();
  if(list.size() == temp-1)
    std::cout << "Passed!\n";
  else
    std::cout << "Failed!\n";
}

void TestSuite::testRemove6()
{
  std::cout << "Test 15: size is still good after removing elements with removeBack: ";
  LinkedListOfInts list;
  for(int i=0;i<10;i++)
    list.addFront(i);
  int temp = list.size();
  list.removeBack();
  if(list.size() == temp-1)
    std::cout << "Passed!\n";
  else
    std::cout << "Failed!\n";
}

void TestSuite::testAdd1()
{
    std::cout << "Test 16: addFront creates nodes with the correct values: ";
    LinkedListOfInts list;
    for(int i=0;i<10;i++)
        list.addFront(1);
    std::vector<int> temp = list.toVector();
    if(temp[5] == 1)
      std::cout << "Passed!\n";
    else
      std::cout << "Failed!\n";
}

void TestSuite::testAdd2()
{
    std::cout << "Test 17: addBack creates nodes with the correct values: ";
    LinkedListOfInts list;
    for(int i=0;i<10;i++)
        list.addBack(1);
    std::vector<int> temp = list.toVector();
    if(temp[5] == 1)
      std::cout << "Passed!\n";
    else
      std::cout << "Failed!\n";
}