#include<iostream>
using namespace std;
/*
* Given a number N (1 < N < 10^9)
* find thr sum of all products x*y
* where x from 1 to N, and y is the integer part of N/x
* for example, if N = 4, then x are 1, 2, 3, 4 and y are 4, 2, 1, 1 responding
* hence the sum is 1*4 + 2*2 + 3*1 + 4*1 = 15
*/

int main() {
	signed int n; cin >> n;
	int t; cin >> t;
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		int y = n / i;
		sum += (i * y);
	}
	cout << sum;
	return 0;
}