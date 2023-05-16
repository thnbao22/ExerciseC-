#include<iostream>
using namespace std;

int main() {
	int n, k, tong = 0; cin >> n;
	k = n;
	while (n > 0) {
		tong = tong * 10 + (n % 10);
		n /= 10;
	}
	if (tong == k) cout << k << " la so thuan nghich";
	else cout << k << " khong la so thuan nghich";
	return 0;
}