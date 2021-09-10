#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// void    PrintVector(const vector<int>& x)   {
//     for (auto a : x)    {
//         cout << a << ",";
//     }
// }

int main () {
    int n, a, c;
    vector <int> queue;
    string operation;
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> operation;
        if (operation != "WORRY_COUNT")   {
            cin >> a;
        }
        if (operation == "COME")  {
            if (a > 0)  {
                while (a != 0)  {
                    queue.push_back(0);
                    a--;
                }
            }
            if (a < 0)  {
                while (a != 0)  {
                    queue.pop_back();
                    a++;
                }
            }
        }
        else if (operation == "WORRY")  {
            queue.at(a) = 1;
        }
        else if (operation == "QUIET")  {
            queue.at(a) = 0;
        }
        else if (operation == "WORRY_COUNT")    {
        cout << count(begin(queue), end(queue), 1) << endl;
        }
        // PrintVector(queue);
        // cout << endl;
    }
    return 0;
}