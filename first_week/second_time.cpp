#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main()  {
    int     i, c;
    string  str;

    cin >> str;
    i = 0;
    c = 0;
    while (str[i] != '\0')  {
        if (str[i] == 'f')  {
            ++c;
        }
        if (c == 2) {
            cout << i << endl;
            break;
        }
        ++i;
    }
    if (c == 0) {
        cout << -2 << endl;
    }
    else if (c == 1)    {
        cout << -1 << endl;
    }
    return 0;
}