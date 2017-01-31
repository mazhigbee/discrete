
#include <iostream>
#include <math.h>

using namespace std;

bool primeChecker(int num);

int main()
{
	int num;
	char keep_going = 'y';
	bool prime;
	while (keep_going == 'y')
	{
		cout << "What number do you want to check? ";
		cin >> num;
		prime =	primeChecker(num);

		if (prime == true)
			cout << num << " is prime\n";
		else if (prime == false)
			cout << num << " is NOT prime\n";

		cout << "Do you want to try again? (y/n)? ";
		cin >> keep_going;
	}



}


bool primeChecker(int num)
{
	//check if num is prime return if true or not
	bool prime;
	int tmp = num;
	int counter = 0;
	prime = true;
	//first check if number is even if number is even it can not be prime
	if (tmp % 2 == 0)
	{
		prime = false;
		cout << "even number\n";
		//two is even and also prime**this is a special case**
		if (tmp == 2)
			cout << " the number is 2\n";
			prime = true;
		counter++;
	}
	//check for odd factors
	if (prime != false && tmp != 2) {
		cout << "entering for loop to check\n";
		for (int i = 3; i < sqrt(tmp); i = i + 2)
		{
			counter++;
			if (tmp % i == 0)
			{
				
				prime = false;
				break;

			}

		}

	}
	
	cout << "Counter: " << counter << endl; 
	return prime;

}