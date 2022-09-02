#include <iostream>
#include <math.h>
using namespace std;
int main()
{

  int a, z, x, y, jumlah;

  cout << "masukkan input: ";
  cin >> a;

  x = 1;
  y = 0;
  jumlah = 0;

  for (int i = 1; i <= a; i++)
  {
    z = x + y;
    cout << z << " ";

    if (z < 4000000)
    {
      if (z % 2 == 0)
      {
        jumlah = jumlah + z;
      }

      y = x;
      x = z;
    }
    else
    {
      break;
    }
  }
  cout << endl;
  cout << jumlah;
}
