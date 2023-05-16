#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
/*
tính S = x + x^2/2! + x^3/3! + .. + x^n/n!
biết x là số thực, -10 <= x <= 10;
n là số nguyên dương, n <= 10;
kết quả làm tròn đến chữ số thập phân thứ 2
*/

double giaithua(double n) {
	double fact = 1;
	for (double i = 1; i <= n; ++i) {
		fact *= i;
	}
	return fact;
}
int main() {
	double x, result = 0;
	int n;
	cin >> x >> n;
	for (double i = 1; i <= n; ++i) {
		result += (pow(x, i)) / giaithua(i);
	}
	cout << fixed << setprecision(2) << result;
	return 0;
}