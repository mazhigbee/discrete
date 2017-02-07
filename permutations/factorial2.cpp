//
//Discrete
//Mazlin Higbee
#include <iostream>
#include <math.h>

using namespace std;


int findFactorial(int num);
int permutation(int n, int r);

int main()
{
	char keep_going = 'y';
	int n;
	int r;

	while (keep_going == 'y')
	{
		cout << "Calculating P(n,r), N is starting value and R is number of purmutations\n";
		cout << "Please enter your value for n: ";
		cin >> n;
		cout << "Please enter you value for r: ";
		cin >> r;

		cout << "The value of P(" << n << "," << r <<") is: " << permutation(n,r) << endl;
		cout << "Would you like to check again?(y/n): ";
		cin >> keep_going;
		
	}

}




int findFactorial(int num)
{

	if (num > 1)
		return num * findFactorial(num - 1);
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