#include <iostream>
#include <math.h>


using namespace std;

int factorial(int n);
int permutation(int n, int r);
void sets(int n, int array[],char charArray[]);
void decToBin(int n, int array[]);

int main()
{
	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = 0;
	}
	char charArray[] = {'A','B','C','D','E','F','G','H','I','J'};
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
			sets(n, array,charArray);
		}
	} while (choice != 4);

	return 0;
}

int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}

int permutation(int n, int r)
{
	if (r > 0)
		return n * permutation(n - 1, r - 1);
	else
		return 1;

}

void sets(int n, int array[],char charArray[])
{
	
	for(int i = 0; i <pow(2,n); i++){
		decToBin(i,array);

		for(int j = 0; j < 10; j ++){
			//binary array 
			if(array[j] == 1){
				cout << charArray[j];
			}
		}
		cout << endl;
	}

	
cout << endl;
}


void decToBin(int n, int array[])
{
	for (int i = 0; i < 10; i++) 
	{
		array[i] = pow(2, i);
		//cout << array[i] << endl;


	}



//TODO: make the following a function   THE INPUT NUMBER STANDS FOR THE NUMBER OF OPTIONS N ^ 2
	//everytime you need to print abc...etc call the function for every number n-n^2
	//print each time
	//increment
	//until you have correct amount of options
	//



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
	//cout << endl;
	//prints binary array
	for(int i = 0; i < 10; i++){
		cout << array[i];
	}
	cout << endl;
}

