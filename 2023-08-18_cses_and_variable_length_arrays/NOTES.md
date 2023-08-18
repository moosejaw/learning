# `malloc` fun

`malloc` by default returns a `void *`, or, a pointer to an unspecified type. Therefore, to use it for other datatypes, it must be cast to a pointer of the type you want it to represent. e.g. for an `unsigned` (integer), it should look like this:

```c
#include <stdlib.h>
unsigned *x = (unsigned *)malloc(sizeof(unsigned));
```

In our case, we declared our `outer` array (just as a pointer to the array of unsigned `int`s, of size `n`). Then, for each element in the outer array, we called `malloc` to allocate the space required by the elements of the subarray. To do so, we accessed the elements of `outer` using indices with the square-bracket notation, and likewise we were **able to access the subarray elements the same way - and assign values this way too.**

See:

```c++
#include <iostream>
#include <stdlib.h>
int main() {
    unsigned n, q;
    cin >> n; cin >> q;
    
    // Create the outer array object to hold all our values
    // const unsigned inner_size = (const unsigned)(3 * pow(10, 5));
    unsigned *outer[n];
    
    // n defines the number of arrays to build,
    // and i defines the number of elements in each subarray
    for (unsigned i = 0; i < n; i++)
    {
        unsigned size_;
        cin >> size_;

        outer[i] = { (unsigned *)malloc(sizeof(unsigned) * size_) };
        
        for (unsigned e = 0; e < size_; e++)
        {
            unsigned c;
            cin >> c;

            outer[i][e] = c;
        }
    }
}
```

Submitting the file `variable_length_array_c_style.cc` to Hackerrank was also considered a valid solution for all test cases.


# Sets in C++

To solve the 'weird number' problem in CSES, I decided to use sets. I would take both sets and get the 'difference' of the two - which was guaranteed to be the problem number.

Syntactically, dealing with sets is a little more difficult than in, say, Python. Declaring the set and adding to it using the `.insert()` option is trivial, but using when using `set_difference` I got one key detail very wrong. **The first two arguments should always be your 'complete' set, and your comparison set should be the second two arguments.**

The output of `set_difference` is an iterator. Iterators have to be declared 'from' the object (and type) you're iterating over. So in the example of my set:

```c++
#include <set>
set<unsigned> s;

// the iterator
set<unsigned>::iterator it;
```

* https://en.cppreference.com/w/cpp/container/set
* https://en.cppreference.com/w/cpp/algorithm/set_difference