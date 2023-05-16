#include<iostream>
#include<cmath>
using namespace std;

bool SoDep(int n, int nt[]) {
	if (n < 4) {
		return false;
	}
	if (n % nt[0] == 0 || n % nt[1] == 0 || n % nt[2] == 0 || n % nt[3] == 0) {
		if (n % (nt[0] * nt[0]) == 0 || n % (nt[1] * nt[1]) == 0 || n % (nt[2] * nt[2]) == 0 || n % (nt[3] * nt[3]) == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}

}

int main() {
	int a, b, nt[4] = { 2, 3, 5, 7 }; cin >> a >> b;
	// nt[4] la mang chua cac so nguyen to
	for (int i = a; i <= b; ++i) {
		if (SoDep(i, nt) == true) {
			cout << i << " ";
		}
	}
	return 0;
}