#include<iostream>
using namespace std;
// dãy số tăng là dãy số có số đằng sau lớn hơn chữ số trước



int main() {
	int n; cout << "Nhap n nguyen duong: "; cin >> n;
	int a[20]{};
	int j = 0;
	while (n > 0) {
		a[j++] = n % 10;
		n /= 10;
	}
	bool inscreasing = true;
	for (int i = 0; i < j; ++i) {
		if (a[i] < a[i + 1]) {
			inscreasing = false;
			break;
		}
	}
	if (inscreasing == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}