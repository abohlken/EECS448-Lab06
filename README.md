# EECS448-Lab06
##Overview

This lab is to give you practice doing some unit testing. Your objective is the following:

    Read the documentation for the provided List Interface and LinkedListOfInts implementation
    Create a test class that will have as many methods as you see fit to verify, using tests, that the LinkedListOfInts satifies the requirements of being a List
        In other words, it fulfils the promises made in its documentation

##Provided Files

    Starter code

##Exercise: Bug Hunt!

        I've taken the liberty of obfuscating the cpp file and only provided a .o file
    Create a Test class that verifies the preconditions, postconditions, and return values of all methods as described in the header
    Create a buglist.txt that contains your best guesses at to what the the purposely inserted bugs are

##Hints

    toVector works, it will take whatever is in the list and return a vector of it's contents
    The constructor works by setting length to 0 and front to nullptr
    The purposely inserted bugs may cause other things that are coded properly appear not to behave properly
        Your test class will verify what works and doesn't work, but you will use your programmer cunning to ascertain what the purposely inserted bugs are
    The TAs do not know what the bugs are

##Rubric

    [70pts] Test class the demonstrates what the LinkedListOfInts can/cannot do
        Every test displays to terminal or write to file a well formatted test
        The tests are automatically run when the program starts
    [30pts] Finding the purposely inserted bugs bugs


Example test output:

Test 1: size of empty list is zero: PASSED
Test 2: size returns correct value after 1 addFront: PASSED
Test 3: size returns correct value after 1 addBack: PASSED

Of course, you'll have multiple tests per method. 
