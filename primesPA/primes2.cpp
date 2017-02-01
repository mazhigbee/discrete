//GENRATES ALL PRIMES FROM 2 TO N
//MAZLIN HIGBEE
//DISCRETE
#include <iostream>
#include <math.h>

using namespace std;

bool primeChecker(int num);

int main()
{
	int num;
	int temp = 0;
	char keep_going = 'y';
	bool prime;
	while (keep_going == 'y')
	{
		cout << "To what number would you like to generate primes?: ";
		cin >> num; 
		for(int i = 2; i < num; i++){
			prime = primeChecker(i);
			if(prime == true){
				cout << i << endl;
				temp++;
			}
		}
		cout << "All primes between 0 and " << num << " printed\n";
		cout << "There are " << temp << " primes\n";
		cout << "Would you like to check another number? (y/n): ";
		cin >> keep_going;
		temp = 0;
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
		//cout << "even number\n";
		//two is even and also prime**this is a special case**
		if (tmp == 2)
		//	cout << " the number is 2\n";
			prime = true;
		counter++;
	}
	//check for odd factors
	if (prime != false && tmp != 2) {
		//cout << "entering for loop to check\n";
		for (int i = 3; i <= sqrt(tmp); i = i + 2)
		{
			counter++;
			if (tmp % i == 0)
			{
				
				prime = false;
				break;

			}

		}

	}
	
	//cout << "Counter: " << counter << endl; 
	return prime;

}