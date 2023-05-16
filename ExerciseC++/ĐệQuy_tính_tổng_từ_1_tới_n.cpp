#include<iostream>
using namespace std;

int tong(int n) {
	int result = 0;
	if (n == 1) {
		return 1;
	}
	else {
		result = n + tong(n - 1);
	}
	return result;
}
int main() {
	int n; cin >> n;
	cout << "Tong tu 0 toi " << n << ": " << tong(n);
	return 0;
}