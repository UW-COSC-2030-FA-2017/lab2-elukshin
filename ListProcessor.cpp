// ListProcessor.cpp
// Emily Lukshin
// September 20 2017
// COSC 2030

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl;
	// test of size function on cows list
	cout << "size of cows list  :  " << cows.size() << endl;
	// test of sum function on cows list
	cout << "sum of cows list  :  " << cows.sum() << endl << endl;
	
	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	// test of size function after an element has been removed
	cout << "size of cows list  :   " << cows.size() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	// test of inserting 5.7 at the end of the horses list
	horses.insertAsLast(5.7);
	cout << "horses list:  " << horses << endl;
	// test of size function on horses list
	cout << "size of horses list :  " << horses.size() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list  :  " << horses << endl << endl;

	List pigs;
	// test of inserting 1.05 at the end of an empty list
	pigs.insertAsLast(1.05);
	cout << "cows list  :  " << cows << endl;
	// test of inserting 6.66 at the end of the cows list
	cows.insertAsLast(6.66);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list  :  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	// test of the size function on the pigs list
	cout << "size of pigs list  :  " << pigs.size() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	// test of inserting 3.14 at the end of the pigs list when it is not empty
	pigs.insertAsLast(3.14);
	cout << "cows list  :  " << cows << endl;
	// test of sum function on the cows list
	cout << "sum of cows list :  " << cows.sum() << endl;
	cout << "horses list  :  " << horses << endl;
	// test of the sum function on the horses list
	cout << "sum of horses list  :  " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	// test of the sum function on the pigs list
	cout << "sum of pigs list  :  " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}