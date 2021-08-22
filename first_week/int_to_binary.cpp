#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main () {
    int i, x;
    vector <int> binary;

    cin >> i;
    while (i > 1)   {
        x = i % 2;
        binary.push_back(x);
        i = i / 2;
    }
    if (i == 1) {
        binary.push_back(1);
    }
    for (auto r = binary.rbegin(); r != binary.rend(); ++r) {
        cout << *r;
    }
    cout << endl;
    return 0;
}