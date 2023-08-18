#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    cout << n << " ";

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            cout << n;
        }
        else
        {
            n = (n * 3) + 1;
            cout << n;
        }

        if (n != 1) cout << " ";
    }
}