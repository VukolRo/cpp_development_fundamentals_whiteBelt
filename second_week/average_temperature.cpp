#include <iostream>
#include <vector>
#include <string>
using namespace std;

int AvrTemp(const vector<int>& v)   {
    int sum = 0;
    for (auto a : v)    {
        sum += a;
    }
    return sum / v.size();
}

void    PrintVector(const vector<int>& x)   {
    for (auto a : x)    {
        cout << a << " ";
    }
}

int main()  {
    int n;
    cin >> n;
    vector<int> temp(n);
    vector<int> result;
    for (int& a : temp) {
        cin >> a;
    }
    for (int i = 0; i < n; i++) {
        if (temp[i] > AvrTemp(temp))  {
            result.push_back(i);
        }
    }
    cout << result.size() << endl;
    PrintVector(result);
    cout << endl;
    return 0;
}