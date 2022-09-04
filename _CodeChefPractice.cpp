#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t, ans;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int min;
        string b;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        min = a[0];
        cin >> b;
        for (int i = 0; i < b.size(); i++)
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