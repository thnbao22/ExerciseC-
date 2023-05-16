#include<iostream>
#include<cmath>
using namespace std;
/* Số nguyên tố mạnh là số nguyên tố lớn hơn 10 
* và có tổng chữ số của nó là một số nguyên tố
*/
bool Strong_Prime(int n) {
	if (n < 10) return false;
	else return true;
}

bool Prime(int n) {
	bool p = true;
	if (n < 2) {   
		p = false;
	}
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			p = false;
			break;
		}
	}
	return p;
}

bool Sum_of_Num(int n) {
	int tong = 0;
	while (n) {
		tong += n % 10;
		n /= 10;
	}

	if (Prime(tong) == true) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int n; cin >> n;
	if (Strong_Prime(n) == true && Sum_of_Num(n) == true && Prime(n) == true) {
		cout << n << " la so nguyen to manh";
	}
	else {
		cout << n << " khong la so nguyen to manh";
	}
	return 0;
}