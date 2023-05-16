#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) return false; break;
	}
	return true;
}
int main() {
	int n; cin >> n;
	cout << isPrime(n);
	return 0;
}