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

		if (num % 2 == 0)		// if the num is even
		{
			prime = false;
			counter++;
			
		}
		
		// otherwise, it's odd
		// only need to check ODD divisors up to sqrt(num)
		else for(int i = 3; i < sqrt(num); i=i+2)
		{
			cout << "Running for loop";
			counter++;
			if(num % i == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime)
		{
			cout << num << " is prime!\n";
			cout << "Count: " << counter << endl;
		}
		else
		{
			cout << num << " is NOT prime.\n";	
			cout << "Count: " << counter << endl;
		}

		cout << "Do you want to try again? (y/n)? ";
		cin >> keep_going;
	}

	return 0;
}