# Binary Search

Algorithm steps are described here: https://en.wikipedia.org/wiki/Binary_search_algorithm

My understanding is that we bisect the array by checking whether the underlying values of the upper or lower bounds of our search indices are greater or less than the target value. As such, if the search head `m` is greater than the target, we eliminate all elements left of the search head, and vice-versa if the search head `m` is less than the target value.

### Segmentation Fault

Whilst coding I encountered a Segmentation Fault. It is described as an error that occurs when the program attempts to access memory locations that are not intended for it to use.

In this specific code example, it came about because I attempted to access the vector at index `x` when it was not yet initialised:

```cpp
std::vector<unsigned> v;
std::cout << v[5];
```

https://en.wikipedia.org/wiki/Segmentation_fault

### STL implementation

An implementation of a binary search is available in the STL. It is defined in `<algorithm>`.

https://en.cppreference.com/w/cpp/algorithm/binary_search


### For next time

* Vim bindings (in VSCode extension)

* g++ command line syntax
