#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;

        int *arr = new int[y - 1];
        int *arr2 = new int[y - 1];

        for (int i = 0; i < y; i++)
        {

            cin >> arr[i];
        }

        for (int i = 0; i < y; i++)
        {

            cin >> arr2[i];
        }

        int kecil = arr[0];

        for (int i = 0; i < y; i++)
        {

            if (arr2[i] == 0)
            {

                if (arr[i] < kecil)
                {

                    kecil = arr[i];
                }
            }
        }

        cout << kecil << endl;
    }

    return 0;
}
