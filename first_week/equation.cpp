#include <iostream>
#include <cmath>
using namespace std;

int main()  {
    double a, b, c, D, x, x1, x2;

    cin >> a >> b >> c;
    D = (b * b) - (4 * a * c);
    if (a == 0) {
        if (b != 0)
        {
            x = -c / b;
            cout << x << endl;
        }
    }
    else {
        if (D > 0)  {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            cout << x1 << " " << x2 << endl;
        }
        else if (D == 0) {
            x = -b / (2 * a);
            cout << x << endl;
        }
        else if (D < 0)
            cout << endl;
    }
    return 0;
}