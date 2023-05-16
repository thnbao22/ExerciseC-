#include<iostream>
#include<iomanip>
using namespace std;
// S = 1 + 1/1! + 1/2! + ... + 1/n!
int main() {
	int n; cin >> n;
	double sum = 1.0, fact = 1;
	for (int i = 1; i <= n; ++i) {
		fact *= i;
		sum += 1.0 / fact;
	}
	if (n == 0) cout << 1;
	else cout << fixed << setprecision(2) << sum;
	return 0;
}
