#include<iostream>
using namespace std;

int main() {
	int n, k, s = 0; cin >> n;
	k = n;
	while (k) {
		int x = k % 10;
		k /= 10;
		s = s * 10 + x;
	}
	
	if (s == n) {
		cout << n << " la so doi xung";
	}
	else {
		cout << n << " khong la so doi xung";
	}
	
	return 0;
}