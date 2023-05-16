#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main() {
	cout << "Bot: anh Bao" << endl;
	string name;
	cout << "Nhap ten nguoi choi: ";
	getline(cin, name);
	cout << "\n\n\t\t|=====================Keo_Bua_Bao=====================|";
	cout << "\n\n\t\t|1. Ban chon keo.                                     |";
	cout << "\n\n\t\t|2. Ban chon bua.                                     |";
	cout << "\n\n\t\t|3. Ban chon bao.                                     |";
	cout << "\n\n\t\t|=====================Keo_Bua_Bao=====================|";

	int choice = 0;
	srand(time(NULL));
	int bot = 1 + rand() % 3;
	do {
		cout << "\nLua chon cua " << name << ": ";
		cin >> choice;
		if (choice != 1 && choice != 2 && choice != 3) {
			cout << "Lua chon cua ban khong hop le." << endl;
			cout << "Vui long nhap lai.";
		}
		else {
			if (choice == 1) { // neu ng choi con keo
				if (bot == 1) { // bot cung chon keo
					cout << "Bao chon keo." << endl;
					cout << name << " chon keo." << endl;
					cout << "Ket qua: Draw" << endl;
					cout << "Bao: Ban an may thoi." << endl;
					cout << "Bao: dam choi lai khong." << endl;
					cout << name << ": sao khong! Lan nua nao.";
				}
				else if (bot == 2) { // bot chon bua
					cout << "Bao chon bua." << endl;
					cout << name << " chon keo." << endl;
					cout << "Ket qua: Bao win." << endl;
					cout << "Bao: ban tuoi ma win dc tui." << endl;
					cout << name << ": An may thoi." << endl;
				}
				else if (bot == 3) {
					cout << "Bao chon bao." << endl;
					cout << name << " chon keo." << endl;
					cout << "Ket qua: You win." << endl;
					cout << name << ": ban sao thang duoc tui.";
					cout << "Bao: haha ban hen thoi." << endl;
					cout << "Bao: Choi lai lan nua nao.";
				}
			}
			else if (choice == 2) {// nguoi choi chon bua
				if (bot == 1) { // bot chon keo
					cout << "Bao chon keo." << endl;
					cout << name << " chon bua." << endl;
					cout << "Ket qua: You Win" << endl;
					cout << name << ": tuoi gi doi thang tui duoc." << endl;
					cout << "Bao: haha choi lai di. Tui se cho ban biet tay.";
				}
				else if (bot == 2) { // bot chon bua
					cout << "Bao chon bua." << endl;
					cout << name << " chon bua." << endl;
					cout << "Ket qua: Draw." << endl;
					cout << "Bao: ban An hen thoi." << endl;
					cout << name << ": Ghe, dam choi lai khong." << endl;
					cout << "Bao: Why not.";
				}
				else if (bot == 3) { // bot chon bao
					cout << "Bao chon bao." << endl;
					cout << name << " chon bua." << endl;
					cout << "Ket qua: Bot win." << endl;
					cout << "Bao: khong co cua thang toi dau." << endl;
					cout << name << ": Duma, choi lai lan nua.";
				}
			}
			else { // nguoi chon bao
				if (bot == 1) { // bot chon keo
					cout << "Bao chon keo." << endl;
					cout << name << " chon bao." << endl;
					cout << "Ket qua: You loose" << endl;
					cout << "Bao: Lai phai win." << endl;
					cout << name << ": Gioi thi choi lai xem nhu the nao.";
				}
				else if (bot == 2) { // bot chon bua
					cout << "Bao chon bua." << endl;
					cout << name << " chon bao." << endl;
					cout << "Ket qua: You win." << endl;
					cout << name << ": Leu leu." << endl;
					cout << "Bao: Ngon thi ban choi lai xem nao. ";
				}
				else if (bot == 3) { // bot chon bao
					cout << "Bao chon bao." << endl;
					cout << name << " chon bao." << endl;
					cout << "Ket qua: Draw." << endl;
					cout << "Bao: Hen thoi." << endl;
					cout << name << ": Vay choi tiep de tim nguoi thang xem nao.";
				}
			}
		}
	} while (choice != 0);
	return 0;
}