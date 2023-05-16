#include<iostream>
using namespace std;
// Amstrong Number la so co tong lap phuong cac chu so cua no bang chinh no
// vd 153 = 1^3 + 3^3 + 5^3
int main() {
	int n, k, s = 0; cin >> n;
	k = n;
	while (n > 0) {
		int x = n % 10;
		s += x * x * x;
		n /= 10;
	}
	if (k == s) cout << k << " is Amstrong Number";
	else cout << k << " is not Amstrong Number";
	return 0;
}