#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

#define inner_size 300000

int main() {
    unsigned n, q;
    cin >> n; cin >> q;
    
    // Create the outer array object to hold all our values
    // const unsigned inner_size = (const unsigned)(3 * pow(10, 5));
    unsigned *outer[n][inner_size];
    
    // n defines the number of arrays to build,
    // and i defines the number of elements in each subarray
    for (unsigned i = 0; i < n; i++)
    {
        unsigned size_;
        cin >> size_;
        
        for (unsigned e = 0; i < size_; e++)
        {
            unsigned c;
            cin >> c;

            // SEG FAULT!
            memcpy(&outer[i][e], &c, sizeof(outer[i][e]));
        }
    }

    // once we have built the array, we then need to
    // load each query and run it. q defines the number
    // of queries to run.
    for (unsigned i = 0; i < q; i++)
    {
        unsigned x, y;
        cin >> x; cin >> y;

        cout << outer[x][y] << endl;
    }

    return 0;
}