// C++ program to generate random numbers
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	// This program will create different sequence of
	// random numbers on every program run
    int ub, lb;
    ub = 5;
    lb = 1;
	// Use current time as seed for random generator
	srand(time(0));

	cout << (rand() % (ub - lb + 1)) + lb << " ";

	return 0;
}
