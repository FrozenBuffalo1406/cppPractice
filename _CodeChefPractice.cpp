#include <iostream>

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

            int n;
            cin >> n;
            int *a = new int[n];
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            string b;
            cin >> b;
            int min = a[0];
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
}