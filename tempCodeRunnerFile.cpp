#include <iostream>
#include <limits.h>
#include <string.h>
using namespace std;

int main()
{
    int t, ans;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            int min = INT_MAX;
            int n;
            cin >> n;
            int a[n];
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            string b;
            cin >> b;
            for (int i = 0; i < n; i++)
            {
                if (b[i] == '0')
                {
                    if (min > a[i])
                    {
                        min = a[i];
                    }
                }
            }
            cout << min << endl;
        }

        return 0;
    }
}