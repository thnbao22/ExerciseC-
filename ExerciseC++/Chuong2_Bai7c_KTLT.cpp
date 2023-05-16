#include<iostream>
#include<iostream>
using namespace std;
// in ra n so nguyen to dau tien
bool Prime(int n) {
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
	int n; cin >> n;
	int count = 0;
	for (int i = 0; i <= 1000; ++i) {
		if (Prime(i) == 1) {
			cout << i << " ";
			count++;
		}
		if (count == n) {
			break;
		}
	}
	
	return 0;
}