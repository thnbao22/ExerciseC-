
#include<iostream>
using namespace std;
int main()
{
    char a, b;
    cin >> a >> b;
    for (char i = a; i <= b; i++)
    {
        cout << static_cast<char>(i - 32) << " "; // Chuyen tu so thanh char
    }

    return 0;
}