#include<iostream>
#include<cmath>
using namespace std;
// tính S = x + x^3 + x^5 + .. + x^2*n+1
int main() {
	int n, x; cout << "Nhap so nguyen duong n: "; cin >> n;
	cout << "Nhap x: "; cin >> x;
	double sum = 0;
	for (int i = 0; i <= n; ++i) {
		sum += pow(x, 2 * i + 1);
	}
	cout << sum;
	return 0;
}