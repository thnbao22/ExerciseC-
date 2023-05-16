#include<iostream>
#include<cmath>
using namespace std;
/* Một số được coi là số đẹp nếu thỏa mãn
* số đó là số nguyên tố
* số đảo ngược của số đó cũng là 1 số nguyên tố khác
*/
bool isPrime(int n, bool &p) {
	if (n < 12) {
		p = false;
	}

	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			p = false;
			break;
		}
		else {
			p = true;
		}
	}
	return p;
}

int Reversed_Number(int n) {
	int sum = 0;
	while (n) {
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
	int n; cin >> n;
	bool prime = true;
	for (int i = 1; i <= n; ++i) {
		int so_dao_nguoc = Reversed_Number(i);
		if (isPrime(i, prime) == true && isPrime(so_dao_nguoc, prime) == true) {
			if (so_dao_nguoc != i) {
				cout << i << " ";
			}
		}
	}
	return 0;
}