#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n; cin >> n;
	bool isPrime = true;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	}
	if (isPrime) {
		cout << n << " is prime number";
	}
	else {
		cout << n << " is not prime Number";
	}
	return 0;
}