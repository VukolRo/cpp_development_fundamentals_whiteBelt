#include <iostream>
#include <vector>
#include <string>
using namespace std;

void    MoveStrings(vector<string>& src, vector<string>& dst)   {
    for (auto a : src)  {
        dst.push_back(a);
    }
    src.clear();
}

// int main()  {
//     vector <string> a = {"c", "d"};
//     vector <string> b = {"a", "b"};
//     MoveStrings(a, b);
//     cout << "Vector src: ";
//     for (auto c : a)    {
//         cout << c << ",";
//     }
//     cout << endl;
//     cout << "Vector dstn: ";
//     for (auto c : b)    {
//         cout << c << ",";
//     }
//     cout << endl;
//     return 0;
// }