#include<iostream>
using namespace std;

int factorial(int n) {
	int giaithua = 1;
	for (int i = 1; i <= n; ++i) giaithua *= i;
	return giaithua;
}
int main() {
	int n;
	do {
		cout << "Nhap so nguyen duong: ";
		cin >> n;
		if (n <= 0) {
			cout << "\nVui long nhap so lon hon 0.";
		}
	} while (n <= 0);
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += factorial(i);
	}
	cout << "tong cac giai thua: " << sum;
	return 0;
}