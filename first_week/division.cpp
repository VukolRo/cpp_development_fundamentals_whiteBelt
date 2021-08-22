#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main()  {
    int a, b, c;

    cin >> a >> b;
    if (b == 0) {
        cout << "Impossible" << endl;
    }
    else if (a >= 0 && b >= 0 && a <= 1000000 && b <= 1000000)  {
        c = a / b;
        cout << c << endl;
    }
    return 0;
}