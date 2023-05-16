#include<iostream>
using namespace std;

double sum(double n) {
	if (n == 1) return 0.5;
	else return 1.0 / (n * (n + 1)) + sum(n - 1);
}
int main() {
	double n; cin >> n;
	cout << sum(n);
	return 0;
}