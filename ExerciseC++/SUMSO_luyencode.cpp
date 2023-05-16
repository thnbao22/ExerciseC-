#include<iostream>
#include<string>
using namespace std;

int main() {
	string s; cin >> s;
	long long sum(0);
	string str = "";
	for (int i = 0; i < (int)s.length(); ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			str.push_back(s[i]); // ý tưởng là đưa các chữ số vào 1 chuỗi rỗng
			//nếu mà kiểm tra kí tự tiếp theo không phải là chữ cái
			// xuống câu lệnh else
		}
		else {
			if (str != "") { // kiểm tra chuỗi str khác rỗng
				sum += stoll(str);
				str = ""; // cập nhập lại giá trị rỗng cho chuỗi str để tiếp tục lưu kí tự số tiếp theo
			}
		}
	}
	cout << sum;
	return 0;
}