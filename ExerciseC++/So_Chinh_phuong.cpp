#include<iostream>
#include<cmath>
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
	bool scp = false;
	for (int i = 1; i <= sqrt(n); ++i) {
		if (i * i == n) {
			scp = true;
			break;
		}
	}
	if (scp == false) {
		cout << n << " khong la so chinh phuong";
	}
	else {
		cout << n << " la so chinh phuong";
	}
	return 0;
}