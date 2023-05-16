#include<iostream>
#include<cstring>
using namespace std;
// 97 - 122 <=> a - z
// 65 - 90	<=> A - Z
/*
* để truyền tham trị kiểu char thì sử dụng kĩ thuật two pointer hoặc reference to pointer
*/
char hoa(char& c) {
	if (c >= 97 && c <= 122) c -= 32;
	else return c;
	return c;
}
char thuong(char& c) {
	if (c >= 65 && c <= 90) c += 32;
	else return c;
	return c;
}
int main() {
	char c;
	cin >> c;
	cout << hoa(c) << endl;
	cout << thuong(c);
	return 0;
}