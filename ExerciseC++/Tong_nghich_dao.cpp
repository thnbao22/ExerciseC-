#include<iostream>
using namespace std;

int main() {
	int n;
	do {
		cout << "Nhap so nguyen duong: ";
		cin >> n;
		if (n <= 0) {
			cout << "\nVui long nhap so lon hon 0.";
		}
	} while (n <= 0);
	float sum = 0.0;
	for (int i = 1; i <= n; ++i) {
		sum += 1.0 / i;
	}
	cout << sum;
}