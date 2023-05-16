#include<iostream>
using namespace std;

//. Nhập 3 số nguyên dương a, b, n với a<n và b <n (có kiểm tra). 
// Tìm các cặp số nguyên dương nhỏ hơn n 
// sao cho tổng của chúng chia hết cho a và không chia hết cho b
int main() {
	int a, b, n;
	do {
		cout << "Nhap 3 so nguyen duong a, b, n: ";
		cin >> a >> b >> n;
		if (a > n && b > n) {
			cout << "\nBan nhap so khong hop le";
			cout << "\nVui long nhap lai";
		}
	} while (a > n && b > n);
	cout << "cac cap so nguyen duong nho hon n, co tong chia het cho a va khong chia het cho b: ";
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if ((i + j) % a == 0 && (i + j) % b != 0 ) {
				cout << i  << " " << j << endl;
			}
		}
	}
	return 0;
}