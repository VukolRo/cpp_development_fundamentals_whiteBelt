#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Reverse(vector<int>& v)    {
    string tmp;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        rtrn.push_back(v.at(i));
    }
}

int main()  {
    vector<int> numbers = {1, 5, 3, 4, 2};
    
    Reverse(numbers);
    for (auto a : numbers)  {
        cout << a << ", ";
    }
    cout << endl;
    return 0;
}