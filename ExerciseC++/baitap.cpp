#include<iostream>
#include<iomanip>
using namespace std;
/*
tính tổng S= 1/2 + 1/3 + .. + 1/n;
làm tròn đến chữ số thập phân thứ 4
*/
int main() {
	int n; cin >> n;
	double sum = 0;
	for (double i = 2; i <= n; ++i) {
		sum += 1.0 / i;
	}
	cout << fixed << setprecision(4) << sum;
	return 0;
}