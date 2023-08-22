/*

10
1 2 3 4 5 6 7 8 9 10

3 1 4 2 7 5 9 6 8 10 -> yes


1 2 3 4 5     --> 1 6 2 7 3 8 4 10 5 9
6 7 8 9 10    // match diagonally on last 2 columns - 4 goes next to 9 which goes next to 5,
                which goes next to 10

13

1 2  3  4  5  6   7    --> 1 8 2 9 3 10 4 11 5 12 6 13 7
8 9  10 11 12 13


13
1  2  3   4   5   6
7  8  9   10  11  12  13


1 2 3 4   --> 3 1 2 4
1  2   -> 1 3 2
3  4
*/
#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    unsigned n; cin >> n;

    if ((n == 3) || (n == 2)) cout << "NO SOLUTION";

    unsigned lhs = floor(n / 2);

    vector<pair<unsigned, unsigned>> vec;

    for (unsigned i = 1; i <= lhs; ++i)
    {
        auto p = make_pair(i, lhs + i);
        vec.push_back(p);
    }
    
    // last element of last pair in vec may not be n itself
    unsigned s = vec.size();

    cout << "lhs is " << lhs << endl;
    for (pair<unsigned, unsigned> p : vec) cout << p.first << " ";
    cout << endl;
    for (pair<unsigned, unsigned> p : vec) cout << p.second << " ";

    bool m = (vec[s - 1].second == n);
    m ? cout << "last element of vec is equal to n" : cout << "last el of vec " << vec[s - 1].second << " is not eq to " << n << endl;

    // alternate each pair to make the beautiful number:
    // e.g. [(1, 7), (2, 8)] etc... do:
    // 1, 7, 2, 8
    // if last el of vector is not n, then adjust accordingly
}
