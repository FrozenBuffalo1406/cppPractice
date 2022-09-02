#include <iostream>
using namespace std;
void isTruePrint(bool isTrue)
{
  if (isTrue == false)
  {
    cout << "bukan" << endl;
  }
  else
  {
    cout << "ya" << endl;
  }
}
main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int a;
    bool isPrime = true;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
      bool isPrime = true;
      if (a % i == 0)
      {
        isPrime = true;
        break;
      }
      else
      {
        isPrime = false;
        break;
      }
    }
    isTruePrint(isPrime);
  }
}