#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// tính tổng căn bậc hai lồng nhau
// kết quả làm tròn đến 5 chữ số thập phân

int main() {
	int n; cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum = sqrt(2 + sum);
	}
	cout << fixed << setprecision(5) << sum;
	return 0;
}