#include<iostream>
#include<iomanip>
using namespace std;
// tính S = sqrt(3 + sqrt(3 + ... + sqrt(3)))
// nhận thấy n là số lần vòng lặp của căn bậc hai
// vid dụ n = 2 thì S = sqrt(3+sqrt(3);
int main() {
	int n; cout << "Nhap so nguyen duong n: "; cin >> n;
	float sum = 0.0;
	for (int i = 1; i <= n; ++i) {
		sum = sqrt(3 + sum);
	}
	cout << "S = " << sum;
	return 0;
}