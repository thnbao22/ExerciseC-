#include<iostream>
#include<cmath>
using namespace std;
// số nguyên tố đặc biệt là một số nguyên chỉ có đúng 3 ước nguyên dương
bool checkPrime(int signed n) {
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return 0;
			break;
		}
	}
	return 1;
}
int main() {
	int signed n;
	cin >> n;
	int count = 0;
	for (int i = 1; i <= sqrt(n); ++i) {
		if (checkPrime(i) == 1) {
			count++;
		}
	}
	cout << count;
	return 0;
}