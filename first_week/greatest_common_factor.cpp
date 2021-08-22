#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main () {
    int a, b, c;

    cin >> a >> b;
    if (a > 0 && b > 0) {
        if (a == b) {
            cout << a << endl;
        }
        else if (a > b) {
            if (a % b == 0) {
                cout << b << endl;
            }
            else    {
                while (a % b != 0)  {
                    c = a;
                    a = b;
                    b = c - b * (c / b);
                }
                cout << b << endl;
            }    
        }
        else if (b > a) {
            if (b % a == 0) {
                cout << a << endl;
            }
            else    {
                while (b % a != 0)  {
                    c = b;
                    b = a;
                    a = c - a * (c / a);
                }
                cout << a << endl;
            }    
        }
    }
    return 0;
}
