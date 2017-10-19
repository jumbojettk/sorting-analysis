// Napon Krassner (Jett)
// CSC 2430, Homework 3
// 05/08/2015
// Due: 05/13/2015
// Name: Implementation file for SortData class - SortData.cpp
// Description: This is the implementation file that implement all the
//				function for SortData class.
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <assert.h>
#include "SortData.h"

using namespace std;

//********CONSTRUCTOR********
SortData::SortData(int max)
{
	// Declared size
	maxSize = max;

	// Allocate theData array from heap
	theData = new long[max];

	assert(theData);  // Error checking
}

//********DESTRUCTOR********
SortData::~SortData()
{
	// Delete theData array
	delete [] theData;
}

//********ACCESSORS********
int SortData::size() const
{
	return maxSize;
}

//********MUTATORS********
void SortData::randomize(int seed)
{
	srand(seed);
	for (int i = 0; i < maxSize; ++i)
		theData[i] = rand() * rand();  // 30 bit values
}

//********UTILITIES********
void SortData::printSome(const int num) const
{
	// new ptr to beginning of array
	long *ptr = theData;
	
	// Print from beginning
	cout << setw(30) <<  "First part of array data: " << endl;
	cout << setw(8) << " ";
	for (int i = 0; i < num; i++)
	{
		cout << setw(10) << *ptr << " ";
		ptr++;
	}

	cout << endl;

	// back to beginning
	ptr = theData;
	// move to last element
	ptr += maxSize - 1;

	// Print from end
	cout << setw(30) << "Last  part of array data: " << endl;
	cout << setw(8) << " ";
	for (int i = 0; i < num; i++)
	{
		cout << setw(10) <<  *ptr << " ";
		ptr--;
	}

	cout << endl << endl;
}