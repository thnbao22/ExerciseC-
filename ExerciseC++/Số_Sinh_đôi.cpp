#include<iostream>
#include<cmath>
using namespace std;
// Các số sinh đôi là các số nguyên tố mà khoảng cách giữa chúng là 2. 
// Hãy in tất cả cặp số sinh đôi < 1000
bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0) {
				return false;
				break;
			}
		}
	return true;
}
int main() {
	cout << "Cac cap so thoa man de bai: ";
	for (int i = 2; i < 1000; ++i) {
		for (int j = i + 1; j < 1000; ++j) {
			if (isPrime(i) == true && isPrime(j) == true) {
				if (j - i == 2) {
					cout << "(" << i <<  ", " << j << ")" << endl;
				}
			}
		}
	}
	return 0;
}