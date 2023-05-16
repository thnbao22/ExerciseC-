#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	string a = string(n, '0' + m); // tạo chuỗi kí tự gồm n kí tự với kí tự m 
	string b = string(m, '0' + n);
	cout << (a < b ? a : b);
	
	return 0;
}