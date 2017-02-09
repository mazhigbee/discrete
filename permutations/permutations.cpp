//Mazlin Higbee
//Permutations
//Program #2
//Partners: Lauren Kayla Dan

#include <iostream>
#include <math.h>


using namespace std;

int factorial(int n);
int permutation(int n, int r);
void sets(int n, int array[], char charArray[]);
void decToBin(int n, int array[]);

int main()
{
	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = 0;
	}
	char charArray[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	int choice, n, r;

	do
	{
		cout << "1. Compute a factorial\n"
		     << "2. Compute P(n,r)\n"
		     << "3. Generate a list of the power set\n"
		     << "4. Quit\n\n"
		     << "What do you want to do: ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Enter n to compute n! ";
			cin >> n;

			cout << "n! = " << factorial(n) << endl;
		}
		else if (choice == 2)
		{
			cout << "Enter n to compute P(n,r) ";
			cin >> n;
			cout << "Enter r to compute P(n,r) ";
			cin >> r;

			cout << "P(n,r) = " << permutation(n, r) << endl;
		}
		else if (choice == 3)
		{
			cout << "Enter n (1-10) to compute all subsets of the set of the first n letters: ";
			cin >> n;
			sets(n, array, charArray);
		}
	} while (choice != 4);

	return 0;
}
/**
*@param n
*returns the factorial of N taken from the user
*/
int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}
/**
*@param n
*@param r
*per-mutates a given number r times starting at n from the user
*
**/
int permutation(int n, int r)
{
	if (r > 0)
		return n * permutation(n - 1, r - 1);
	else
		return 1;
}

/**
*
*@param n
*@param array[]
*@param charArray[]
*calls dec to bin 2^N times to generate a new array of "Binary values" each time
*each generated array is checked against charArray[j]
*any members in array[] that are one print the corresponding char in chararray[]
*/

void sets(int n, int array[], char charArray[])
{
	cout << "{empty set}";

	for (int i = 0; i < pow(2, n); i++) {
		decToBin(i, array);

		for (int j = 0; j < 10; j ++) {
			//binary array
			if (array[j] == 1) {
				cout << charArray[j];
			}
		}
	
	}
	cout << endl;
}

/*
*@param n
*@param array
*creates an array that stores a "binary" number
*each slot is a representation of a power of 2  1-2-4-8-16-32-64-128-512
*/
void decToBin(int n, int array[])
{
	for (int i = 0; i < 10; i++)
	{
		array[i] = pow(2, i);
		//cout << array[i] << endl;
	}

	for (int j = 9; j >= 0; j--)
	{
		if (n == array[j] ) {
			n = n - array[j];
			array[j] = 1;
			//cout << array[j];
		}
		else if (n > array[j]) {
			n = n - array[j];
			array[j] = 1;
			//cout << array[j] << endl;
		}
		else if (n < array[j]) {
			array[j] = 0;
			//cout << array[j] << endl;
		}

	}
	//prints binary array
	// for (int i = 0; i < 10; i++) {
	// 	cout << array[i];
	// }
	cout << endl;
}

