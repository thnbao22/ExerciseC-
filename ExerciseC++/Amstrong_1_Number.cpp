#include<iostream>
#include<cmath>
using namespace std;
/*
Số Amstrong là số thỏa các điều kiện
- số có n chữ số và thỏa mãn tổng của lũy thừa bậc n của từng chữ số trong A bằng chính nó.
*/

// hàm đếm số mũ của chữ số được nhâp vào
double So_Mu(int n) {
	double count = 0;
	while (n) {
		n /= 10;
		count++;
	}
	return count;
}


int main() {
	int n, k; cin >> n;
	k = n;
	double so_mu = So_Mu(n), tong = 0;
	while (n > 0) {
		double x = n % 10;
		tong += pow(x, so_mu);
		n /= 10;
	}
	if (tong == k) {
		cout << k << " la so Amstrong";
	}
	else {
		cout << k << " khong la so Amstrong";
	}
	return 0;
}