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
	int k, sum = 0;
	if (n % 2 != 0) {
		k = n - 1;
		for (int i = 2; i <= k; i+=2) {
			sum += i;
		}
	}
	else {
		k = n;
		for (int i = 2; i <= k; i+=2) {
			sum += i;
		}
	}
	cout << sum;
	return 0;
}