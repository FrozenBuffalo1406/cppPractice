#include <iostream>
using namespace std;
int test(int *n) {
    *n = 10;
    return *n;
}
int main(int argc, char const *argv[]) {
    int x = 50;
    test(&x);
    cout << x;

    return 0;
}
