#include<iostream>
using namespace std;

int main() {
	int h; cin >> h;
	for (int i = 1; i <= h; ++i) {
		for (int j = 1; j <= h; ++j) {
			if (i >= j) {
				cout << "* ";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}