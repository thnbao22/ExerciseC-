#include<iostream>
#include<cmath>
using namespace std;
/*	------Số Smith------
 thỏa: 
 - nếu số nhập vào không phải là số nguyên tố 
 - có tổng của các thừa số nguyên tố bằng tổng chính nó
*/
int TongcacChuSo(int n) {
	int s1 = 0;
	while (n) {
		s1 += n % 10;
		n /= 10;
	}
	return s1;
}

bool Smith(int n) {
	int sum1 = TongcacChuSo(n);
	int sum2 = 0;
	int temp = n;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			while (n % i == 0) {
				sum2 += TongcacChuSo(i);
				n /= i;
			}
		}
	}
	if (temp == n) return false; // neu bang thi n la so nguyen to
	if (n > 1)
		sum2 += TongcacChuSo(n);
	return sum1 == sum2;

}
int main() {
	int n; cin >> n;

	if (Smith(n)) {
		cout << n << " is a Smith Number";
	}
	else {
		cout << n << " is not a Smith Number";
	}
	return 0;
}