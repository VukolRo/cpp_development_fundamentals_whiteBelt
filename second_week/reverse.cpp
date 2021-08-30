#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Reverse(vector<int>& v)    {
    int tmp;
    
    for (int j = v.size() - 1, i = 0; i < v.size() / 2; i++, j--)
    {
        tmp = v.at(j);
        v.at(j) = v.at(i);
        v.at(i) = tmp;
    }
}

// int main()  {
//     vector<int> numbers = {1, 5, 3, 4, 2};
    
//     Reverse(numbers);
//     for (auto a : numbers)  {
//         cout << a << ", ";
//     }
//     cout << endl;
//     return 0;
// }