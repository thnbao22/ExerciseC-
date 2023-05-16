#include<iostream>
using namespace std;

int main() {
	int count[10] = { 0 }; // mảng chứa các chữ số từ 0 đến 9;
	long long n; cin >> n;
	while (n > 0) {
		int chu_so = n % 10;
		count[chu_so]++;
		n /= 10;
	}
	for (int i = 0; i < 10; ++i) {
		cout << i << " xuat hien " << count[i] << " lan." << endl;
	}

	return 0;
}