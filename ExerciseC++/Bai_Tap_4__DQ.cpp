#include<iostream>
using namespace std;

double Tong_nghich_dao_so_chan(double n) {
	if (n == 1) {
		return 0.5;
	}
	else {
		return Tong_nghich_dao_so_chan(n - 1) + 1.0 / (2*n);
	}
}
int main() {
	double n; cin >> n;
	cout << Tong_nghich_dao_so_chan(n);
	return 0;
}