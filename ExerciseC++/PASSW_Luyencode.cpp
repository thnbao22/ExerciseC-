#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
* Giả sử mỗi mật khẩu là một chuỗi ký tự khác rỗng chỉ gồm các chữ cái la-tinh in hoa (A…Z),
in thường (a…z) và chữ số (0..9). Ta đánh giá độ “an toàn” của mật khẩu bởi hai tiêu chí:

* Độ dài (số ký tự): là một số nguyên trong phạm vi từ 0..5 
	Nếu mật khẩu có độ dài là m thì độ an toàn là:  min(5, max(m-5, 0)
* Loại kí tự(hoa, thường, số):
* nếu chỉ có 1 loại kí tự: 1
* có đúng 2 loại kí tự: 2
* có đủ 3 loại kí tự: 5

# Độ an toàn của mật khẩu là tổng của 2 tiêu chí trên
Ví dụ: mật khẩu làAbcd123456có độ an toàn là: 5 (độ dài) + 5 (loại ký tự) = 10.
*/


int safety_2(string pass) {
	int ki_tu_thuong = 0,  ki_tu_hoa = 0, ki_tu_so = 0;
	for (int i = 0; i < pass.length(); ++i) {
		if (pass[i] <= 122 && pass[i] >= 97) {
			ki_tu_thuong = 1;
		}
		else if (pass[i] >= 48 && pass[i] <= 57) {
			ki_tu_so = 1;
		}
		else {
			ki_tu_hoa = 1;
		}
		
	}
	int do_dai = pass.size();

	int loai_ki_tu = ki_tu_thuong + ki_tu_hoa + ki_tu_so; // dat ra mot bien loai ki tu de xac dinh dc co bao nhieu laoi ki tu
	if (loai_ki_tu == 1) {
		return 1 + min(5, max(do_dai - 5, 0));
	}
	else if (loai_ki_tu == 2) {
		return 2 + min(5, max(do_dai - 5, 0));
	}
	else {
		if (loai_ki_tu == 3) {
			return 5 + min(5, max(do_dai - 5, 0));
		}
	}
}
int main() {
	int test; cin >> test;
	while (test--) {
		string password;
		cin >> password;
		cout <<  safety_2(password) << " ";
	}
	return 0;
}
