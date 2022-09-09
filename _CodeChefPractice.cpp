#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int min;
    int t;
    int n = INT_MAX;
    string v;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        min = INT_MAX;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> v;
        for (int i = 0; i < v.length(); i++)
        {
            if (v[i] == '0')
            {
                if (a[i] < min)
                {
                    min = a[i];
                }
            }
        }
        cout << min << endl;
    }

    return 0;
}