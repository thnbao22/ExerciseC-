#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> v;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin() + 1, v.end() - 1);
	for (auto x : v) {
		cout << x << " ";
	}
	return 0;
}