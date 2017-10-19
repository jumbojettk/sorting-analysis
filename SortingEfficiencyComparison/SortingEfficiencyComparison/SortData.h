// Napon Krassner (Jett)
// CSC 2430, Homework 3
// 05/08/2015
// Due: 05/13/2015
// Name: Header file for SortData class - SortData.h
// Description: This is the header file that contains all the function
//				declaration for SortData class and documentation to explain
//				how they work. SortData is the base class that gets	inherited
//				by SelectionSort and QuickSort classes.
//******************************************************************************

#ifndef _SORT_DATA_
#define _SORT_DATA_

#include <iostream>

using namespace std;

class SortData
{
public:
	//********CONSTRUCTOR********
	// Parameters: int - size of the array with default max to 100
	// Return: nothing
	// Description: Uses new operator, allocate theData array with size
	//				in param.
	SortData(int = 100);

	//********DESTRUCTOR********
	// Parameters: none
	// Return: nothing
	// Description: Deallocates the memory for SortData class to free up
	//				the heap and avoid memory leak
	~SortData();

	//********ACCESSORS********
	// Parameters: none
	// Return: int - size of array
	// Description: Returns the size of theData array.
	int size() const;

	//********MUTATORS********
	// Parameters: int - seed 
	// Return: nothing
	// Description: Fills contents of theData array.
	//				Data values obtained from random number generator.
	//				
	// Note: srand(seed) and rand() used to produce 0-32767 (15-bit values).
	//		srand(seed) init sequence,
	//		different seed produce different sequences of rand() values.
	void randomize(int = 1);

	// Parameters: none
	// Return: nothing
	// Description: Pure virtual method (thus the = 0), implemented in classes
	//				derived from SortData.
	virtual _int64 sort() = 0;

	//********UTILITIES********
	// Parameters: int - amount of values (count) to be printed
	// Return: nothing
	// Description: Prints the first specified (in param) values of theData
	//				and the last values of theData.
	//				Debugging purpose.
	void printSome(const int = 10) const;

protected:
	//********MEMBER VARS********
	long *theData;
	int maxSize;
};

#endif