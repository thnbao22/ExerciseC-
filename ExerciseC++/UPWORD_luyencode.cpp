#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s; cin >> s;
	int count(0);
	if (s[0] >= 'A' && s[0] <= 'Z') count++;
	for (int i = 0; i < s.length(); ++i) {
		if ((s[i+1] >= 'A' && s[i+1] <= 'Z') && (s[i] >= 'a' && s[i] <= 'z')) count++;
	}
	cout << count;
	return 0;

}