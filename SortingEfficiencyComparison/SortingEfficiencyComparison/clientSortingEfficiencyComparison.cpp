// Napon Krassner (Jett)
// CSC 2430, Homework 3
// 05/08/2015
// Due: 05/13/2015
// Name: Client file for InsertionSort class
//						- clientSortingEfficiencyComparison.cpp
// Description: This is the client file that test the SortData, InsertionSort,
//				and QuickSort classes and produces a report comparing the
//				efficiency between SelectionSort and QuickSort.
//******************************************************************************

#include <iostream>
#include <iomanip>
#include "InsertionSort.h"
#include "QuickSort.h"
using namespace std;

// Function declaration
void test(SortData&, bool = false);

int main()
{
	cout << "*****Welcome to Sorting Efficiency Comparison by Napon Krassner (Jett)*****" << endl << endl;

	// Test insertion sort
	cout << "****************Insertion Sort testing: ****************" << endl;
	InsertionSort is10(10);

	// Test with print out data for small and large size
	test(is10, true);
	test(InsertionSort(100000), true);

	// Test for different size array
	test(InsertionSort(10));
	test(InsertionSort(100));
	test(InsertionSort(1000));
	test(InsertionSort(10000));
	test(InsertionSort(100000));
	cout << endl << endl;

	// Test quicksort
	cout << "****************QuickSort testing: ****************" << endl;

	// Test with print out data for small and large size
	test(QuickSort(10), true);
	test(QuickSort(1000000), true);

	// Test for different size array
	test(QuickSort(10));
	test(QuickSort(100));
	test(QuickSort(1000));
	test(QuickSort(10000));
	test(QuickSort(100000));
	test(QuickSort(1000000));

	return 0;
}

void test(SortData& ad, bool print)
{
	ad.randomize();  // init the data contents
	_int64 num;
	if (print)  // output or not
	{
		// Print unsorted
		cout << endl << "====>Unsorted Dataset size(" << ad.size() << "): <====" << endl;
		ad.printSome();
		
		// virtual-function call (polymorphic)
		// sort it
		num = ad.sort();  
		
		// Print sorted
		cout << "====>Sorted Dataset size(" << ad.size() << "): <====" << endl;
		ad.printSome();
	}
	else
	{
		// polymorphic sort w/o printing
		num = ad.sort();
	}

	cout << "Dataset Size= " << setw(8) << ad.size();
	cout << " Num Ops = " << num << endl;
}