#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int max_digit = 0;
	while (n > 0) {
		int digit = n % 10;
		if (digit > max_digit) {
			max_digit = digit;
		}
		n /= 10;
	}
	cout << "chu so lon nhat trong so ban nhap la: " << max_digit;
	return 0;
}