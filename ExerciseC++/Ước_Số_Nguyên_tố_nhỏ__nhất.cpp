#include<iostream>
#include<cmath>
using namespace std;

/*
* Cho số tự nhiên N. 
Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N. 
Ước số nguyên tố nhỏ nhất của 1 là 1. 
Ước số nguyên tố nhỏ nhất của các số chẵn là 2. 
Ước số nguyên tố nhỏ nhất của các số nguyên tố là chính nó
*/
bool Prime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return 0;
			break;
		}
	}
	return 1;
}
int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (i == 1) {
			cout << 1 << endl;
		}
		else if (i % 2 == 0) {
			cout << 2 << endl;
		}
		else {
			if (Prime(i) == true) {
				cout << i << endl;
			}
		}
	}
	return 0;
}