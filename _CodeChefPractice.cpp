#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, ans;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int tcCount;
        cin >> tcCount;
        int *arr = new int[tcCount];
        int *sum = new int[tcCount];
        for (int i = 0; i < tcCount; i++)
        {
            cin >> arr[i];
        }
        string tcStat;
        cin >> tcStat;
        for (int i = 0; i < tcStat.length(); ++i)
        {
            if (tcStat.at(i) == '0')
            {
                sum[i] = arr[i];
            }
        }

        int min = sum[0];
        int size = sizeof(sum) / sizeof(sum[0]);
        for (int i = 0; i < size; i++)
        {
            if (sum[i] < min)
            {
                min = sum[i];
            }
            ans = min;
        }
        cout << ans;
    }
    return 0;
}
