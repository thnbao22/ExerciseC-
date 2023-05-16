#include<iostream>
using namespace std;

int main() {
	int n, tong = 0;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	for (int i = 1; i < n; ++i) {
		if (n % i == 0) {
			tong += i;
		}
	}
	if (tong == n) {
		cout << n << " la so hoan hao";
	}
	else {
		cout << n << " khong la so hoan hao";
	}
	return 0;
}