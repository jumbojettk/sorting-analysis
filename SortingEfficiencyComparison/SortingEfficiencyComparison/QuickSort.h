// Napon Krassner (Jett)
// CSC 2430, Homework 3
// 05/08/2015
// Due: 05/13/2015
// Name: Header file for QuickSort class - QuickSort.h
// Description: This is the header file that contains all the function
//				declaration for the QuickSort class and documentation
//				explaining how they work. QuickSort is a derived class
//				from the SortData class.
//******************************************************************************

#ifndef _QUICK_SORT_
#define _QUICK_SORT_

#include "SortData.h"

using namespace std;

class QuickSort : public SortData
{
public:
	//********CONSTRUCTOR********
	// Parameters: int - size of the array with default max to 100
	// Return: nothing
	// Description: Uses new operator, allocate theData array with size
	//				in param.
	QuickSort(int = 100);

	//********DESTRUCTOR********
	// Parameters: None
	// Return: nothing
	// Description: Deallocates the memory for QuickSort class to free up
	//				the heap and avoid memory leak.
	~QuickSort();

	//********MUTATORS********
	// Parameters: none
	// Return: _int64 - number of significant operations
	// Description: Sorts theData array using quicksort
	//				returns a count of numops that were required.
	// Note: significant operation is:
	//		- a comparison of two key-data values
	//		- an assignment of two key-data values
	_int64 sort();

private:
	//********PRIVATE MEMBER VARS********
	_int64 numops;

	//********PRIVATE MEMBER FUNCTIONS********
	// Parameters: long[] - theArray, int - size of theArray
	// Return: nothing
	// Description: Uses the quicksort algorithm to sort theArray
	//				with size n.
	void quicksort(long[], int);

	// Parameters: long[] - theArray, int - first, int - last
	// Return: nothing
	// Description: Uses recursion to sort theArray using
	//				quicksort algorithm.
	//				Built based on Malik's example for recursive
	//				quick sort.
	void recQuickSort(long[], int, int);

	// Parameters: long[] - theArray, int - first, int - second
	// Return: nothing
	// Description: Swaps the first and second element in theArray.
	//				Built based on Malik's example for partition method
	//				for use with quicksort.
	//				Added counting number of operations.
	void swap(long[], int, int);

	// Parameters: long[] - theArray, int - first, int - last
	// Return: int - location of pivot
	// Description: Partition theArray into lower and upper sublists.
	//				And returns location of pivot to determine
	//				starting and ending locations of the sublists.
	//				Built based on Malik's example for use with quicksort.
	//				Added counting number of operations.
	int partition(long[], int, int);
};

#endif