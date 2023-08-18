#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    unsigned s;
    cin >> s;

    set<unsigned> base;
    for (unsigned i = 1; i < s + 1; ++i)
    {
        base.insert(i);
    }

    set<unsigned> comp;
    for (unsigned i = 0; i < s - 1; ++i)
    {
        unsigned num;
        cin >> num;
        comp.insert(num);
    }

    // cout << "base elements: ";
    // set<unsigned>::iterator it;
    // for (it = base.begin(); it != base.end(); ++it) cout << *it << " ";

    // cout << "comp elements: ";
    // set<unsigned>::iterator itt;
    // for (itt = comp.begin(); itt != comp.end(); ++itt) cout << *itt << " ";

    vector<unsigned> v;
    set_difference(base.begin(), base.end(), comp.begin(), comp.end(), inserter(v, v.begin()));

    // cout << "output v size is " << v.size();
    for (auto& n : v) cout << n;
}