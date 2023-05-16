#include<iostream>
using namespace std;
// S = 1 + (1* 2) + (1*2*3) + ... + (1 * 2 * 3 * ... * n)
int main() {
	int n; cin >> n;
	int sum = 0, s = 1;
	for (int i = 1; i <= n; ++i) {
		s *= i;
		sum += s;
	}
	cout << sum;
	return 0;
}