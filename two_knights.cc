// 2024-02-24

/*
 * 1. Move one knight along the chessboard for each row and column.
 * 2. Detect how many valid attacks (a) the knight can make at each position.
 * 3. k*k - v = number of moves for the current cell (t)
 * 4. Keep a running total of t. (t += t) Once loop is exhausted, t is the answer.
*/

#include <iostream>
#include <set>
#include <utility>

using namespace std;

#define ull unsigned long long
#define ll long long

bool
isValidMove(ll moveX, ll moveY, ull k)
{
    cout << "moveX=" << moveX << ",moveY=" << moveY << ",k=" << k;
    if (
        (moveX < 0) || (moveY < 0) ||
        (moveX > k - 1) || (moveY > k - 1)
    ) {
        cout << " invalid " << endl;
        return false;
    }
    cout << " valid " << endl;
    return true;
}

// moves for a knight are:
// pos(x-2, y+1)
// pos(x-1, y+2)
// pos(x+1, y+2)
// pos(x+2, y+1)
// pos(x-2, y-1)
// pos(x-1, y-2)
// pos(x+1, y-2)
// pos(x+2, y-1)


void
countMove(set<pair<ll, ll> > s, ull *a, ll x, ll y)
{
    pair<ll, ll> p = make_pair(x, y);

    if (s.count(p) == 1) {
        return;
    }
    else {
        s.insert(p);
        (*a)++;
        return;
    }
}

int
main()
{
    unsigned k;

    cin >> k;

    ull kk = k * k;
    ull t = 0;

    if (k == 0) { cout << "0" << endl; return 0; }

    set<pair<ll, ll> > s;
    for (ull x = 0; x < k; x++)
    {
        for (ull y = 0; y < k; y++)

        {
            unsigned *a;
            (*a) = 0;

            pair<ll, ll> p = make_pair(x-1, y+2);
            pair<ll, ll> p2 = make_pair(x, y+2);
            s.insert(p);
            cout << "found " << s.count(p) << endl;
            cout << "found " << s.count(p2) << endl;



            // check all possible attacks are valid
            if (isValidMove((ll)x-2, (ll)y+1, k)) { countMove(s, &a, x-2, y+1); }
            if (isValidMove((ll)x-1, (ll)y+2, k)) { a += 1; }
            if (isValidMove((ll)x+1, (ll)y+2, k)) { a += 1; }
            if (isValidMove((ll)x+2, (ll)y+1, k)) { a += 1; }
            if (isValidMove((ll)x-2, (ll)y-1, k)) { a += 1; }
            if (isValidMove((ll)x-1, (ll)y-2, k)) { a += 1; }
            if (isValidMove((ll)x+1, (ll)y-2, k)) { a += 1; }
            if (isValidMove((ll)x+2, (ll)y-1, k)) { a += 1; }

            cout << a << " valid moves for x=" << x << ",y=" << y;
            t += (kk - a);
            cout << " t is " << t << endl << endl;
        }
    }

    cout << t << endl;
}
