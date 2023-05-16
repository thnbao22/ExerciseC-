#include<iostream>
using namespace std;

int recurive(int n) {
	int result = 1;
	if (n == 0) {
		return 1;
	}
	else {
		result = n * recurive(n - 1);
	}
	return result;
}
int main() {
	int n; cin >> n;
	cout << "Tich tu 1 toi " << n << ": " << recurive(n);
	return 0;
}