#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t, min;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            auto a = new int[n];
            cin >> a[i];
            min = a[0];
        }
        string v;
        cin >> v;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == '0')
            {
                if (min > v[i])
                {
                    min = v[i];
                }
            }
        }
    }
    cout << min;
    return 0;
}