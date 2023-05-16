#include<iostream>
#include<cstring>
using namespace std;
// con số duyên nợ là con số có chữ số đầu và chữ số cuối giống nhau
int main() {
	string n;
	cin >> n;
	if (n[0] == n[n.length() - 1]) {
		cout << "Chu so cuoi va chu so dau giong nhau";
	}
	else {
		cout << "Chu so cuoi va chu so dau khong giong nhau";
	}
	return 0;
}