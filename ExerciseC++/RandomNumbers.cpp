#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//to random number
// Using rand()
// must include <ctime> and <cstdlib> header file
// rand() % 10: random integer between 0 and 9
// a + rand() % b ------->  return a random number, between a and a + b, excluding a + b;
// example: 50 + rand() % 50 -----> return a random number, betwwen 50 and 99
int main() {
	srand(time(0));
	// the following code will display the random integer with the random seed
	int number1 = rand() % 10;
	// to obtain the random integer between 0 and 9
	// use rand() % 10
	int number2 = number1 + rand() % 100;

	cout << "number1: " << number1;
	cout << "\nnumber2: " << number2;
	return 0;
}