#include<iostream>
using namespace std;

int main() {
	int seconds, hours, minutes, totalseconds; 
	cout << "Nhap vao so giay ban muon doi gio phut giay: ";
	cin >> totalseconds;
	hours = totalseconds / 3600;
	minutes = totalseconds / 60;
	seconds = totalseconds % 60;

	cout << "So giay ban nhap dc doi thanh: " << hours << " gio " << minutes << " phut " << seconds << " giay ";
	
	return 0;
}