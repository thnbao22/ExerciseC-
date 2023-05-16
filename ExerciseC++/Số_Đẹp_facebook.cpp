#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
/*
* Một số được coi là số đẹp 
 Nếu thỏa 2 điểu kiện:
 1. chữ số đầu gấp đôi chữ số cuối hoặc ngược lại.
 2. đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là số thuận nghịch.
*/
bool dieu_kien_1(long long a) {
	string num = to_string(a);
	int length_of_num = num.length();
	if (num[0] == '0' || num[length_of_num - 1] == '0') { 
		return false; // số cuối hoặc số đầu phải khác không
	}
	if (num[0] != 2 * (num[length_of_num - 1] - '0') + '0' && 2 * (num[0] - '0') + '0' != num[length_of_num - 1]) {
		/*
		* vì biến được dùng so sánh đang ở kiểu kí tự nên chúng ta phải so sánh ở kiểu kí tự
		* nên chúng ta sẽ phải tính toán dựa trên giá trị bảng mã ascii
		* ví dụ với số 2 và 4 có mã ascii tương ứng là 50 và 52
		* chữ số đầu gấp đôi chữ số cuối hoặc ngược lại
		* với điều kiện if trên thì 2 * (50 - 48) + 48 = 52 tức là 52 == 52 
		*/
		return false;
		 
	}
	return true;
}

bool dieu_kien_2(long long a) {
	string thuan_nghich = to_string(a);
	for (int i = 1; i < (thuan_nghich.length()- 1) / 2; ++i) {
		if (thuan_nghich[i] != thuan_nghich[thuan_nghich.length() - i - 1]) {
			return false;
			break;
		}
	}
	return true;

	/*
	string number = to_string(a);
	int len = number.length();
	string sub_num = number.substr(1, len - 2);
	string reversed_num = sub_num;
	reverse(reversed_num.begin(), reversed_num.end());
	return sub_num == reversed_num;
	
	* hàm substr(x, y) sẽ cắt chuỗi từ vị trí x đến vị trí y - 1
	* nên muốn cắt từ số ở vị trí thứ 2 đến gần cuối phải là substr(1, len - 2) với 1 là vị trí cần cắt và len - 2 tức là số kí tự cần cắt 
	
	*/
}
int main() {
	string s("12344328");
	int x = s.length();
	cout << x << " ";
	string a = s.substr(1, x - 1);
	cout << a;
	
	return 0;
}