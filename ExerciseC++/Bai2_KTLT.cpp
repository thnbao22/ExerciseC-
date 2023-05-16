#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#define MAX 4
int main() {
	srand(time(NULL));
	int a[MAX]; // khai bao mang chua 4 so nguyen
	for (int i = 0; i < MAX; ++i) {
		a[i] = 1 + rand() % 100; // random tu 1 den 100 
	}
	for (int i = 0; i < MAX; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
	int max = a[0];
	for (int i = 0; i < MAX; ++i) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout << max;
	return 0;
}