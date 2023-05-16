#include<iostream>
using namespace std;
/*
* Tìm tất cả các số có 4 chữ số sao cho 
tổng chữ số hàng nghìn và hàng trăm là số lẻ 
còn tổng 2 chữ số còn lại là số chẵn.
n là số có 4 chữ số
* lấy chữ số hàng nghìn n / 1000 
ví dụ 9324 / 1000 = 9 -> chữ số hàng nghìn là 9
* lấy chữ số hàng trăm (n / 100) % 10
ví dụ 9234 / 100 = 92 và 92 % 10 = 2
* lấy chữ số hàng đơn vị n % 10
* lấy chữ số hàng chục  (n / 10) % 10 
ví dụ 9324 / 10 = 932 và 932 % 10 = 2



*/

int main() {
	for (int i = 1000; i < 10000; ++i) {
		int chu_so_hang_nghin = i / 1000;
		int chu_so_hang_tram = (i / 100) % 10;
		int chu_so_hang_chuc = (i / 10) % 10;
		int chu_so_hang_don_vi = i % 10;
		int tong_hang_nghin_va_tram = chu_so_hang_nghin + chu_so_hang_tram;
		int tong_hang_chuc_va_don_vi = chu_so_hang_chuc + chu_so_hang_don_vi;
		if (tong_hang_nghin_va_tram % 2 != 0 && tong_hang_chuc_va_don_vi % 2 == 0) {
			cout << i << endl;
		}
	}
	return 0;
}