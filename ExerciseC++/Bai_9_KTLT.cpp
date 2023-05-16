#include<iostream>
using namespace std;
/*
*  In ra màn hình tất cả các số nguyên 
trong phạm vi từ 10->99 
sao cho tích của 2 chữ số bằng 2 lần tổng của chúng
*/
bool dieu_kien(int n) {
	int temp = n;
	int sum = 0;
	int tich = 1;
	while (n > 0) {
		int x = n % 10;
		sum += x;
		n /= 10;
	}

	while (temp > 0) {
		int x = temp % 10;
		tich *= x;
		temp /= 10;
	}
	if (tich == sum) return 1;
	else return 0;
}
int main() {
	for (int i = 10; i <= 99; ++i) {
		if (dieu_kien(i) == true) {
			cout << i << " ";
		}
	}
	return 0;
}