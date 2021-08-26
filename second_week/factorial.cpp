#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int Factorial (int x)   {
    if (x < 2)  {
        return 1;
    }   else    {
        int i = 2;
        int r = 1;
        while (i <= x)  {
            r = r * i;
            i++;
        }
        return r;
    }
}

int main()  {
    int x;

    cin >> x;
    cout << Factorial(x) << endl;
    return 0;
}