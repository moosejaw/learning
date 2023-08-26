#include <iostream>
#include <cmath>

using namespace std;

/*

1         2(+1)    9(+8)   10(+9)
4(+3)     3(+2)    8(+7)   11(+10)
5(+4)     6(+5)    7(+6)   12(+11)
16(+15)   15(+14)  14(+13) 13(+12)
17(+16)

take the larger of y or x, simply take y if y == x

if y is larger (or equal to x):
    if y is even:
        1, y = y ^ 2
        x, y = y ^ 2 - x + 1
    if y is odd:
        1, y = y ^ 2 + 1
        x, y = ((y-1 ^ 2) + 1) + x - 1
        5, 2 = ((5-1) ^ 2) + 1) + 2 - 1  = 18
        

if x is larger:
    if x is odd:
        x, 1 = x ^ 2
        x, y = x ^ 2 - y + 1
    if x is even:
        x, 1 = x ^ + 1
        x, y = ((x-1 ^ 2) + 1) + y - 1

*/

int main()
{
    unsigned t;
    cin >> t;

    unsigned long long y, x;
    for (unsigned i = 0; i < t; ++i)
    {
        cin >> y; cin >> x;

        bool y_gte_x = y >= x ? true : false;

        unsigned long long* primary = y_gte_x ? &y : &x;
        unsigned long long* secondary = *primary == y ? &x : &y;

        if (y_gte_x) {
            if (*primary % 2 == 0)
            {
                cout << ((*primary * *primary)) - *secondary + 1 << endl;
            }
            else {
                cout << (((*primary - 1) * (*primary - 1)) + 1) + *secondary - 1 << endl;
            }
        }
        else {
            if (*primary % 2 == 0)
            {
                cout << (((*primary - 1) * (*primary - 1)) + 1) + *secondary - 1 << endl;
            }
            else {
                cout << ((*primary * *primary)) - *secondary + 1 << endl;
            }
        }
    }
}