/*
 *  Name: Phu Ha
 *
 * 	Project Name: CSC450-CTA03
 *
 *	Project Purpose: Practice on using C++ pointers
 *
 *	Algorithm Used: N/A
 *
 *	Program Inputs: N/A
 *
 *	Program Outputs: prints out contents of variables and pointers
 *
 *	Program Limitations:
 *
 *	Program Errors:
 *
 *  Created on: Jan 16, 2024
 *      Author: phuth
 */

#include <iostream>

using namespace std;

int main()
{
	// variables to store user inputs
	int num1, num2, num3;

	// Ask user for inputs and store user inputs
	cout << "Please enter 3 integers: ";
	cin >> num1 >> num2 >> num3;

	// create three new pointers with dynamic memory allocation
	int * pNum1 = new int;
	int * pNum2 = new int;
	int * pNum3 = new int;

	// dereference each pointer and set its value to the corresponding user input
	*pNum1 = num1;
	*pNum2 = num2;
	*pNum3 = num3;

	// print out variables' contents
	cout << "Contents of variables: ";
	cout << num1 << ", " << num2 << ", " << num3 << endl;

	// print out pointers' contents
	cout << "Contents of pointers: ";
	cout << *pNum1 << ", " << *pNum2 << ", " << *pNum3;

	// deallocate pointers memory
	delete pNum1;
	delete pNum2;
	delete pNum3;

	return 0;
}


