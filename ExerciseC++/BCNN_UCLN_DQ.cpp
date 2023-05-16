#include<iostream>
using namespace std;
/*
giải thích cách hoạt động của hàm đệ quy ucln
vd a = 2, b = 12 thì dòng tương đương ucln(2, 12)
dòng tương đương ucln(12, 2)
và đệ quy ngược lên sẽ tương đương dòng  ucln(12, 2)
đến dòng tương đương ucln(2, 12 % 2 == 0) 
đến dòng ucln(2, 0) vì b == 0; return a tương đương return 2
*/

int ucln(int a, int b) {
	if (b == 0) return a;
	return ucln(b, a % b);
}

int bcnn(int a, int b) {
	return a / ucln(a, b) * b;
}
int main() {
	int a, b; cout << "Nhap 2 so a va b: "; cin >> a >> b;
	cout << ucln(a, b) << endl;
	cout << bcnn(a, b) << endl;
	
	return 0;
}