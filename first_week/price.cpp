#include <iostream>
using namespace std;

int main()  {
    double N, A, B, X, Y, p;

    cin >> N >> A >> B >> X >> Y;
    if (A < B)  {
        if (N > B)  {
            p = N * (Y / 100);
            cout << N - p << endl;
        }
        else if (N > A) {
            p = N * (X / 100);
            cout << N - p << endl;
        }   else    {
            cout << N << endl;
        }
    }
    return 0;
}