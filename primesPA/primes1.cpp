//GENERATES N AMOUNT OF PRIMES
//Discrete
//Mazlin Higbee
#include <iostream>
#include <math.h>

using namespace std;

bool primeChecker(int num);

int main()
{
	int num;
	int temp = 2;
	char keep_going = 'y';
	bool prime;
	int primeCounter = 0;
	while (keep_going == 'y')
	{
		cout << "How many primes would you like to generate?: ";
		cin >> num; 
		
		while(primeCounter < num){
			prime = primeChecker(temp);
			if(prime == true){
				cout << temp << endl;
				primeCounter++;
			}
			temp++;
		}
		cout << num << " primes printed\n";
		cout << "Would you like to check another number? (y/n): ";
		cin >> keep_going;
		temp = 0;
		primeCounter = 0;
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