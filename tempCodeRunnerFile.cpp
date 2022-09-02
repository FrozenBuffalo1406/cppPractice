#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int w, x, y, z;
        int sum1, sum2, sum3;
        cin >> w >> x >> y >> z;
        sum1 = x + y;
        sum2 = x + z;
        sum3 = y + z;
        if (w == x || w == y || w == z)
        {
            cout << "yes" << endl;
        }
        else if (w == sum1 || w == sum2 || w == sum3)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
