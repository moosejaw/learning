/*

10
1 2 3 4 5 6 7 8 9 10

3 1 4 2 7 5 9 6 8 10 -> yes

mid = 5
1 2 3 4 5     --> 1 6 2 7 3 8 4 10 5 9
6 7 8 9 10    // match diagonally on last 2 columns - 4 goes next to 9 which goes next to 5,
                which goes next to 10

given integer n
iterate in range between 1 and mid (i)

for each iteration: print : i, print : i + mid;

if not even number and on penultimate iteration: print n;
*/
#include <iostream>
#include <cmath>
using namespace std;

void solve(unsigned n)
{
    unsigned mid = floor(n / 2);

    bool is_even = n % 2 == 0 ? true : false;

    for (unsigned i = 1; i <= mid; ++i)
    {
        if (mid - i == 1 && (!is_even)) cout << n << " ";
        cout << i << " " << i + mid << " ";
    }
}

int main()
{
    unsigned n; cin >> n;

    switch (n)
    {
        case 1:
            cout << "1";
            break;

        case 2:
            cout << "NO SOLUTION";
            break;

        case 3:
            cout << "NO SOLUTION";
            break;

        case 5:
            cout << "4 2 5 3 1";
            break;

        case 4:
            cout << "2 4 1 3";
            break;

        default:
            solve(n);
            break;
    }
}