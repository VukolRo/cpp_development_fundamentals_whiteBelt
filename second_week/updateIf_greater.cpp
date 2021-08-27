#include <iostream>
#include <vector>
#include <string>
using namespace std;

void    UpdateIfGreater(int first, int& second) {
    if (first > second) {
        second = first;
    }
}

// int main () {
//     int a = 5;
//     int b = 3;

//     UpdateIfGreater(a, b);
//     cout << b << endl;
//     return 0;
// }