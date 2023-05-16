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

bool so_Thuan_Nguyen_To(int n) {
	int Sum1 = Tong_Chu_So(n);
	bool thuan_nguyen_to = true;
	if (isPrime(Sum1) == true && Tach_So(n) == true && isPrime(n) == true) {
		thuan_nguyen_to = true;
	}
	else {
		thuan_nguyen_to = false;
	}
	return thuan_nguyen_to;
	
}
int main() {
	int a, b; cin >> a >> b;
	for (int i = a; i <= b; ++i) {
		if (so_Thuan_Nguyen_To(i) == true) {
			cout << i << " ";
		}
	}
	return 0;
}