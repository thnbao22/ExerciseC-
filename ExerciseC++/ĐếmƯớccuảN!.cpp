#include<iostream>
using namespace std;

int factorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; ++i) {
		fact *= i;
	}
	return fact;
}

int main() {
	int n, count = 0; cin >> n;
	for (int i = 1; i <= factorial(n); ++i) {
		if (factorial(n) % i == 0) {
			count++;
		}
	}
	cout << count;
	return 0;
}