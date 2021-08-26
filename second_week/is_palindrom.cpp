#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;



bool    IsPalindrom (string str)    {
    int i, n = 0;

    if (str.length() == 0 || str.length() == 1) {
        return true;
    }   
    if (str.length() == 2) {
        if (str[i] == str[i+1]) {
            return true;
        }   else    {
            return false;
        }       
    }    else    {
        n = str.length();
        while (i < n / 2)    {
            if (str[i] != str[n - i])   {
                return false;
            }   else    {
                continue;
            }
            i++;
        }
        return true;
    }
}

int main () {
    string x;

    cin >> x;
    cout << boolalpha << IsPalindrom(x) << endl;
    return 0;
}