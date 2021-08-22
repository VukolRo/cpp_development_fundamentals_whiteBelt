#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()  {
    vector<int> nums = {9, 6, 3, 1, 7, 3};
    cout << count(begin(nums), end(nums), 3) << "\n";
    sort(begin(nums), end(nums));
    for (auto x : nums) {
        cout << x << "\n";
    }
    return 0;
}