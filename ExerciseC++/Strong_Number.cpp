#include<iostream>
using namespace std;
// vd 145 = 1! + 4! + 5!
int factorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; ++i) {
		fact *= i;
	}
	return fact;
}

bool Strong(int n) {
	int k = n, tong = 0;
	while (n) {
		int x = n % 10;
		tong += factorial(x);
		n /= 10;
	}

	if (k == tong) return true;
	else return false;
}
int main() {
	int n; cin >> n;
	if (Strong(n) == true) {
		cout << n << " la so Strong";
	}
	else {
		cout << n << " khong la so strong";
	}
	return 0;
}