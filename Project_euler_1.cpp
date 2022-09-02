#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int a, b;
    b = 0;

    cout << "masukkan batas: ";
    cin >> a;

    for (int i = 1; i < a; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
            b = b + i;
        }
        else if (i % 5 == 0)
        {
            cout << i << " ";
            b = b + i;
        }
    }

    cout << endl;
    cout << "total = " << b;
}