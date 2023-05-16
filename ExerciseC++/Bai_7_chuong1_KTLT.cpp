#include<iostream>
using namespace std;

int main() {
	double total_money = 0, total_km;
	cin >> total_km;
	if (total_km <= 0) {
		cout << "Gia tri ban nhap khong hop le";
	}
	else if (total_km <= 1) {
		total_money += 15000;
	}
	else if (total_km <= 5) {
		total_money = 15000 + (total_km - 1) * 13500;
	}
	else if (total_km < 120) {
		total_money = 15000 + 4 * 13500 + (total_km - 5) * 11000;
	}
	else {
		total_money = (15000 + 4 * 13500 + (total_km - 5) * 11000) * 0.9;
	}
	cout << "Tong so tien tuong ung voi so km ban di: " << total_money;

	return 0;
}