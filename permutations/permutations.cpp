#include <iostream>
#include <math.h>

using namespace std;

int factorial(int n);
int permutation(int n, int r);
void sets(int n);

int main()
{
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

			cout << "P(n,r) = " << permutation(n,r) << endl;
		}
		else if (choice == 3)
		{
			cout << "Enter n (1-10) to compute all subsets of the set of the first n letters: ";
			cin >> n;
			sets(n);
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
	if(r > 0)
		return n * permutation(n-1,r-1);
	else
		return 1;

}

void sets(int n)
{
	for(int i = 0; i < pow(2,n); i++)
	{
	// Convert i to binary, and print corresponding set



	}
}

