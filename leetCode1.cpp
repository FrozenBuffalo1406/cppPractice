#include <iostream>
using namespace std;

int main()
{
    // string arr[3] = {"saffa", "oke", "tes"};

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    string arr[201];
    int x;

    cout << "masukkan batas array: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < x; i++)
    {
        cout << arr[i];
    }

    return 0;
}
