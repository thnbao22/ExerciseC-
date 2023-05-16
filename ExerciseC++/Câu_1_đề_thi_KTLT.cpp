#include<iostream>
using namespace std;
/*
cho a(0) = 2, a(1) = 4
tính a(n) = 2a(n-1) + 2a(n-2)
*/
int main() {
	int a0 = 2, a1 = 4;
	int n; cin >> n;
	cout << "Day so thoa man de bai: " << endl;
	cout << a0 << " " << a1 << " ";
	for (int i = 3; i <= n; ++i) {
		int a = 2 * a0 + 2 * a1;
		cout << a << " ";
		a0 = a1;
		a1 = a;
	}
	return 0;
}