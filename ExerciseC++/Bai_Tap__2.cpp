#include<iostream>
#include<cmath>
using namespace std;
// Tính S = 1^2 + 2^2 + 3^2 + .. + n^2

/*
double dieu_kien(double n) {
	if (n == 1) return 1;
	else return pow(n, 2) + dieu_kien(n - 1);
}
*/

int main() {
	double n, sum = 0.0; cin >> n;
	//cout << dieu_kien(n);
	for (int i = 1; i <= n; ++i) {
		sum += pow(i, 2);
	}
	cout << sum;
	return 0;
}