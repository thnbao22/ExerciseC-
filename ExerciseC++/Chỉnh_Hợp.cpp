#include<iostream>
using namespace std;

long long factorial(int x) {
	if (x == 0 || x == 1) {
		return 1;
	}
	int fact = 1;
	for (int i = 1; i <= x; ++i) {
		fact *= i;
	}
	return fact;
}

long long result(int n, int k) {
	if (n == k) {
		return n;
	}
	else {
		return factorial(n) / (factorial(n - k));
	}
}
int main() {
	int n, k; cin >> n >> k;
	cout << "Gia tri cua P(" << n << "," << k << "): " << result(n, k);
	return 0;
}