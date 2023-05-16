#include"MyLibrary.h"

int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (isPrime(i) == true) {
			cout << i << " ";
		}
	 }
	return 0;
}