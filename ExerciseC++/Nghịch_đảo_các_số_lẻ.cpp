#include<iostream>
#include<iomanip>
using namespace std;
// tồng nghịch đảo các số lẻ: S = 1 + 1/3 + 1/5 + ... + 1/2n-1
int main() {
	int n; cin >> n;
	float sum = 0.0;
	for (int i = 1; i <= n; ++i) {
		if (i % 2 != 0) {
			sum += 1.0 / i;
		}
	}
	cout << fixed << setprecision(2) <<sum;
	return 0;
}