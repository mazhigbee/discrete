//Mazlin Higbee Primes.cpp homework 1-27
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num;
	bool prime;
	char keep_going = 'y';
	int counter = 0;

	while (keep_going == 'y')
	{
		cout << "What number do you want to check? ";
		cin >> num;

		prime = true;
		//first check if number is even if number is even it can not be prime
		if (num % 2 == 0)
		{
			prime = false;

			//two is even and also prime**this is a special case**
			if (num == 2)
				prime = true;
			counter++;
		}
		//check for odd factors
		if (prime != false && num != 2) {
			for (int i = 3; i <= sqrt(num); i = i + 2)
			{
				counter++;
				if (num % i == 0)
				{
					cout << "Prime is false leaving for loop at " << counter << endl;
					prime = false;
					break;

				}
				
			}

		}

		if (prime)
		{
			cout << num << " is prime!\n";
			cout << "Checks: " << counter << endl;

		}
		else
		{
			cout << num << " is NOT prime.\n";
			cout << "checks: " << counter << endl;
		}

		cout << "Do you want to try again? (y/n)? ";
		cin >> keep_going;
		counter = 0;
	}

	return 0;
}