#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n, x; 
	double result = 0; 
	cin >> n >> x;
	for (int i = 1; i <= n; ++i) {
		result += 1.0 / (i * pow(x, i + 1));
	}
	cout << result;
	return 0;
}