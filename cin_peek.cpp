#include <iostream>
using namespace std;
string z, s;
main()
{
  while (true)
  {
    cin >> z;
    s = s + z + ' ';
    if (cin.peek() == '\n')
      break;
  }
  cout << s << endl;
}
