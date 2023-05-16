#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	cout << "Nhap a va b: ";
	cin >> a;
	cin >> b;
	float average = static_cast<float>((a + b) / 2.0f);
	cout << average;
	return 0;
}