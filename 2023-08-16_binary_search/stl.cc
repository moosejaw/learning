#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    unsigned target;
    std::cin >> target;

    std::vector<unsigned> v;
    for (int i = 0; i < 1000; ++i) v.push_back(i);

    bool result = std::binary_search(v.begin(), v.end(), target);

    result ? std::cout << target << " is in the array." << std::endl : std::cout << target << " is not in the array." << std::endl;
}
