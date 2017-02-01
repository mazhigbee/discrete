//Mazlin Higbee Primes.cpp homework 1-27
#include <iostream>

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
		// //first check if number is even if number is even it can not be prime
		// if (num % 2 == 0)
		// {
		// 	prime = false;
		// 	//two is even and also prime**this is a special case**
		// 	if (num == 2)
		// 		prime = true;
		// }
		//divide num by 2 because factors repeat after half of the number

		for (int i = 2; i < num / 2; i++)
		{
			cout << "entered 4 loop";
			counter++;
			if (num % 2 == 0)
			{
				prime = false;
				cout << "EVEN NUMBER";
				
				//two is even and also prime**this is a special case**
				if (num == 2) {
					cout << "YOU ENTERED 2";
					prime = true;
					counter++;
					break;
				}
				break;
			}

			//DEBUG
			// cout << "you are checking numbers";
			// cout << i << endl;


			if (num % i == 0)
			{
				prime = false;
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
			cout << "Checks: " << counter << endl;
			
		}

		cout << "Do you want to try again? (y/n)? ";
		counter = 0;
		cin >> keep_going;
	}

	return 0;
}