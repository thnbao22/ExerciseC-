#include<iostream>
using namespace std;


bool Chan_le(int n) {
	// neu true thi se la so chan 
	// nguoc lai se la so le
	if (n % 2 == 0) return true;
	else return false;
}

int main() {
	int n, k, count1, count2; cin >> n;
	k = n;
	count1 = count2 = 0;
	while (n > 0) {
		int x = n % 10;
		if (Chan_le(x) == true) {
			count2++;
			
		}
		else {
			count1++;
		}
		n /= 10;
	}
	cout << "Co " << count2 << " so chan va " << count1 << " so le trong so " << k;
	return 0;
}
