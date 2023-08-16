#include "math.h"
#include <iostream>
#include <vector>

using namespace std;

unsigned get_m(unsigned l, unsigned r)
{
    return floor((l + r) / 2);
}

int main()
{
    unsigned target;
    cin >> target;
    
    vector<unsigned> arr;

    const unsigned n = 1000;
    unsigned l = 0, r = n - 1;

    // fill the vector with elements
    for (unsigned i = 0; i < n; i++)
    {
        arr.push_back(i);
    }
    if (target > arr[n - 1]) cout << "Target is larger than max value in array. Can't search." << endl;

    // if  L > R, the search terminates as unsuccessful
    if (l > r) cout << "Search unsuccessful." << endl;

    unsigned m = get_m(l, r), iters = 0;
    
    while (arr[m] != target)
    {
        iters++;
        cout << endl << endl << "Iteration #" << iters << endl;
        m = get_m(l, r);
        if (arr[m] < target)
        {
            l = m + 1;
            cout << "Array at index " << m << " is " << arr[m] << " which is less than target " << target << ". Setting l to " << l << endl; 
            continue;
        }
        if (arr[m] > target)
        {
            r = m - 1;
            cout << "Array at index " << m << " is " << arr[m] << " which is greater than target " << target << ". Setting r to " << r << endl; 
            continue;
        }
    }

    cout << endl << endl << "Target is found. It was at index " << m << " and took " << iters << " iterations to find." << endl;
    return 0;
}