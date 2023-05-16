#include<iostream>
using namespace std;
// tìm x nguyên dương lớn nhất biết: 1 + 2 + 3 + ... + x <= N
//   5 <= N <= 10^9
int main() {
	int signed N, sum = 0;
	int x = 0;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		sum += i;
		if (sum > N) {
			x += i - 1;
			break;
		}
	}
	cout << x;
	return 0;
}