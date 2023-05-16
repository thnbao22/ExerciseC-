#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s; getline(cin, s);
	string x= "";
	x += s[0];// giả định robot đã đọc được 1 kí tự của chuỗi nhập vào từ bàn phím
	for (int i = 1; i < s.length(); ++i) {// vòng lặp duyệt chuỗi s
		int count = 0;// giả định rằng robot chưa đọc được chữ cái đó
		for (int j = 0; j < x.length(); ++j) {// vòng lặp duyệt chuỗi x
			if (s[i] == x[j]) {
				count = 1;
				// nếu đã đọc thì cập nhập count = 0
			}
		}
		if (count == 0) {
			x += s[i];
		}
	}
	cout << x;
	return 0;
}