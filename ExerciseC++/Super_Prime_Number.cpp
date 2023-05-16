#include<iostream>
#include<cmath>
using namespace std;
/*
* Số siêu nguyên tố là số nguyên tố 
khi bỏ một số tuỳ ý các chữ số bên phải của nó thì phần còn lại vẫn tạo thành một số nguyên tố.
*/
bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0) {
				return false;
				break;
			}
		}
	}
	return true;
}

bool so_sieu_nguyen_to(int n) {
	while (n != 0) {
		if (isPrime(n) == false) {
			return false;
		} 
		n /= 10;
	}
	return true;
}
int main() {
	int n; cin >> n;
	if (so_sieu_nguyen_to(n) == true) {
		cout << "so sieu nguyen to";
	}
	else {
		cout << "khong la so sieu nguyen to";
	}
	return 0;
}