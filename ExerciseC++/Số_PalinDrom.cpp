//Số Palindrom là số vừa là số nguyên tố vừa là số đối xứng
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n) {
	bool prime = true;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			prime = false;
			break;
		}
		else {
			return true;
		}
	}
	return prime;
}

bool So_Doi_Xung(int n) {
	int sum = 0;
	int x = n;
	while (n) {
		sum = sum * 10 + (n % 10);
		n /= 10;
	}

	if (sum == x) return true;
	else return false;
}
int main() {
	int n, k; cin >> n;
	if (isPrime(n) == true && So_Doi_Xung(n) == true) cout << n << " la so Palindrom";
	else cout << n << " khong la so Palindrom";
	return 0;
}