#include <iostream>

using namespace std;


int animals(int chickens, int cows, int pigs)
{	return 2*chickens+4*(cows+pigs);	}

int main()
{	cout << animals(3,5,6);
}

//GG13
