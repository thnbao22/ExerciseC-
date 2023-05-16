#include<iostream>
using namespace std;
int Factorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; ++i) {
		fact *= i;
	}
	return fact;
}
int main() {
	int n, sum = 0; cin >> n;
	for (int i = 1; i <= n; ++i) {
		sum += Factorial(i);
	}
	cout << sum;
	return 0;
}