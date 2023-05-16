#include<iostream>
#include<cmath>
using namespace std;

bool Prime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}


int Count_Prime_Num(int n) {
	int count = 0;
	while (n) {
		int x = n % 10;
		if (Prime(x) == true) {
			count++;
		}
		n /= 10;
	}
	return count;
}
int main() {
	int n; cin >> n;
	cout << "So luong chu so nguyen to cua so ban nhap: " << Count_Prime_Num(n);
	return 0;
}