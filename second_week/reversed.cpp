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
vector<int> Reversed(const vector<int>& v)  {
    vector <int> result;
    result = v;
    Reverse(result);
    return result;
}

// int main()  {
//     vector <int> numbers = {1, 5, 3, 4, 2};
//     vector <int> result;
//     result = Reversed(numbers);
//     for (auto a : result)  {
//         cout << a << ", ";
//     }
//     cout << endl;
//     return 0;
// }
