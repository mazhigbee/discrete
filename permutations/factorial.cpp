//
//Discrete
//Mazlin Higbee
#include <iostream>
#include <math.h>

using namespace std;


int findFactorial(int num);


int main()
{
	char keep_going = 'y';
	int factorial;

	while (keep_going == 'y')
	{

		cout << "Please input the number you would like to permutate: \n";
		cin >> factorial;
		cout << "The factorial of " << factorial << " is:  " << findFactorial(factorial) << endl;
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