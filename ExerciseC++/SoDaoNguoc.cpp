#include<iostream>
using namespace std;

int main() {
	int n, k, reserved_number = 0; cin >> n;
	k = n;
	while (n > 0) {
		int x = n % 10;
		reserved_number = reserved_number * 10 + x;
		n /= 10;
	}
	cout << "So dao nguoc cua " << k << " la " << reserved_number;
	return 0;
}