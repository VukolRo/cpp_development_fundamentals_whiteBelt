#include <iostream>
#include <string>
using namespace std;

bool    IsPalindrom (string str)    {
    int i = 0;
    int len;

    len = str.length();
    if (len == 0 || len == 1) {
        return true;
    }   
    if (len == 2) {
        if (str[i] == str[i+1]) {
            return true;
        }   else    {
            return false;
        }       
    }    else    {
        while (i < len / 2)    {
            if (str[i] != str[len - 1 - i])   {
                return false;
            }
            i++;
        }
        return true;
    }
}

// int main () {
//     string x;

//     cin >> x;
//     cout << boolalpha << IsPalindrom(x) << endl;
//     return 0;
// }