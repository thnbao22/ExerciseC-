#include<iostream>
#include<cmath>
using namespace std;
/* Số thuần nguyên tố
 - phải là một số nguyên tố
 - tổng các chữ số phải là số nguyên tố
 - tất cả các chữ số là số nguyên tố
*/

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	bool prime = true;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			prime = false;
			break;
		}
		else {
			prime = true;
		}
	}
	return prime;
}

int Tong_Chu_So(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool Tach_So(int n) {
	bool cac_chu_so = true;
	while (n > 0) {
		int x = n % 10;
		if (isPrime(x) == true) {
			cac_chu_so = true;
			n /= 10;
		}
		else {
			cac_chu_so = false;
			break;
		}
	}
	return cac_chu_so;

}
int main() {
	int n; cin >> n;
	int Sum = Tong_Chu_So(n);
	if (isPrime(Sum) == true && Tach_So(n) == true && isPrime(n) == true) {
		cout << n << " la so thuan nguyen to";
	}
	else {
		cout << n << " khong la so thuan nguyen to";
	}
	return 0;
}