#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


// 'A' to 'Z' : 65 to 90
// 'a' to 'z' : 97 to 122

//  vd input a and z se tuong ung voi 65 and 90
// neu muon random trong a va z co bao gom z
// thi phai z - a + 1 tuc la 122 - 97 + 1 = 26
// vay 97 + rand() % 122 se random tu 97 den 122 
// vay la da bao gom a va z
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char startChar, endChar;
	cout << "Nhap ki tu dau tien: ";
	cin >> startChar;
	cout << "Nhap ki tu cuoi cung: ";
	cin >> endChar;
	char randomChar = static_cast<char>(startChar + rand() % (endChar - startChar + 1));
	cout << "Random character between " << startChar << " and " << endChar << ": " << randomChar;

	return 0;
}