#include<iostream>
using namespace std;
// tính S = 1 + 1/(1+2) +...+ 1/(1+2+...+n)

int main() {
	int n; cout << "Nhap so nguyen duong n: "; cin >> n;
	double sum = 0.0, sum_mau = 0;
	for (int i = 1; i <= n; ++i) {
		sum_mau += i;
		sum += 1.0 / sum_mau;
	}
	cout << sum;
	return 0;

}