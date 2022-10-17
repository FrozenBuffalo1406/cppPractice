#include <stdlib.h>

#include <iostream>

using namespace std;

int main() {
    double a, b, c, d;
    double tot1, tot2;
    int jlh;

    cin >> jlh;
    for (int i = 0; i < jlh; i++) {
        cin >> a >> b >> c >> d;
        tot1 = 1 / (c / a);
        tot2 = 1 / (d / b);
        if (tot1 > tot2) {
            cout << "Chefina" << endl;
        } else if (tot1 < tot2) {
            cout << "Chef" << endl;
        } else if (tot1 == tot2) {
            cout << "Both" << endl;
        }
    }

    cin.get();
    return 0;
}
