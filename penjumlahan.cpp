#include <iostream>
using namespace std;

int penjumlahan(int nilai1, int nilai2);

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << penjumlahan(a, b);
    cout << penjumlahan(c, d);
    return 0;
}

int penjumlahan(int nilai1, int nilai2)
{
    int hasil;
    hasil = nilai1 + nilai2;
    return hasil;
}