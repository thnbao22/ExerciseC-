#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
#define MAX 10
void Print_Array(const array<int, MAX>& a) {
	for (const int& x : a) {
		cout << x << " ";
	}
}
int main() {
	array <int, MAX> a = { 1, 2, 3, 53, 5, 76, 43, 65, 23, 20 };
	Print_Array(a);
	cout << "Sap xep tang dan: ";
	sort(a.begin(), a.end()); // sap xep tang dan
	Print_Array(a);
	cout << "\nPhan tu lon nhat: " << a[MAX - 1];
	cout << "\nPhan tu nho nhat: " << a[0];
	return 0;
}