#include<iostream>
using namespace std;
// cho 4 số nguyên a, b, c, d. 
//Viết chương trình xem liệu có tồn tại 1 số n nào đó thuộc [a,b] và n thuộc [c,d]		
bool Trung_khoang(int a, int b, int c, int d) {
	for (int i = a; i <= b; ++i) {
		if (c <= i && i <= d) {
			return true;
		}
	}
	return false;
}
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	if (Trung_khoang(a, b, c, d) == true) {
		cout << "Yes";
	}
	else {
		cout << "NO";
	}
	return 0;
}