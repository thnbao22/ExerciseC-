#include<iostream>
#include<cmath>
using namespace std;

//Số Palindrom là số vừa là số nguyên tố vừa là số đối xứng
// Example: 131 151 
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
	int a, b; cin >> a >> b;
	cout << "Cac so Palindrom trong doan tu " << a << " toi " << b << ": ";
	for (int i = a; i <= b; ++i) {
		if (isPrime(i) == true && So_Doi_Xung(i) == true) {
			cout << i << " ";
		}
	}
	return 0;
}