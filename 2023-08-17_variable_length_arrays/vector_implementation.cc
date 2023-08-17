#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;


int main() {
    unsigned n, q;
    cin >> n; cin >> q;
    
    // Create the outer array object to hold all our values
    vector<vector<unsigned>> vec;

    // n defines the number of arrays to build,
    // and i defines the number of elements in each subarray
    for (unsigned i = 0; i < n; i++)
    {
        unsigned size_;
        cin >> size_;
        // cout << "outer iter" << endl;

        vector<unsigned> v;
        vec.push_back(v);
        for (unsigned e = 0; e < size_; e++)
        {
            // cout << "inner iter" << endl;
            unsigned c;
            cin >> c;

            vec[i].push_back(c);
        }
    }

    // once we have built the array, we then need to
    // load each query and run it. q defines the number
    // of queries to run.
    for (unsigned i = 0; i < q; i++)
    {
        unsigned x, y;
        cin >> x; cin >> y;

        cout << vec[x][y] << endl;
    }

    return 0;
}