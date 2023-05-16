#include<iostream>
using namespace std;
// Given a integer number N, print out the total number of different
// squares in a grid of NxN squares.
// For example, if N = 2, the answer should be 5.

int main() {
	int n; cin >> n;
	int result = 0;
	for (int i = 1; i <= n; ++i) {
		result += i * i;
	}
	cout << result;
	return 0;
}