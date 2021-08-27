#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool    IsPalindrom (string str)    {
    for (int i = 0; i < str.size() / 2; i++)   {
        if (str[i] != str[str.size() - 1 - i])  {
            return false;
        }
    }
    return true;
}

vector <string>  PalindromFilter(vector <string> words, int minLength)    {
    vector <string> rtrn;
    for (auto s : words)  {
        if (IsPalindrom(s) && s.size() >= minLength)  {
            rtrn.push_back(s);
        }
    }
    return rtrn;  
}

// int main()  {
//     vector <string> words = {"weew", "bro", "code"};
//     vector <string> rtrn;
//     rtrn = PalindromFilter(words, 4);
//     cout << rtrn.at(0) /*<< " " << rtrn.at(1)*/ << endl;
//     return 0;
//}