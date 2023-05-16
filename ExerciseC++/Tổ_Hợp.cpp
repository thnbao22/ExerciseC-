#include <iostream>
#include<time.h>
using namespace std;


double factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

double result(int n, int k) {
     return (factorial(n)) / (factorial(k) * (factorial(n - k)));
}


int main()
{

    int n, k;
    cin >> n >> k;
    clock_t start, end; // khai bao bien thoi gian
    double time_use; // khai bao bien luu tru thoi gian su dung
    start = clock(); // lay thoi gian trc khi thuc hien thuat toan
    cout << "Gia tri cua C(" << n << "," << k << "): " << result(n, k);
    end = clock(); // lay thoi gian khi ket thuc thuat toan
    time_use = (double)(end - start) / CLOCKS_PER_SEC; // tinh thoi gian su dung

    cout << "\nThoi gian Chay chuong trinh sau khi nhap n va k: " << time_use;
    return 0;
}