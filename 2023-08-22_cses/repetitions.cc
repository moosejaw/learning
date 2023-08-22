#include <iostream>
using namespace std;

int main()
{
    string chars;
    cin >> chars;
    
    unsigned longest = 1;

    char current = (char)chars[0];
    unsigned count = 1;
    for (long unsigned int i = 1; i < chars.length(); ++i)
    {
        if ((char)chars[i] == current)
        {
            count++;
            // cout << "letter is " << chars[i] << " and count is " << count << endl;
            // current = (char)chars[i];
            // continue;
        }
        else
        {
            // cout << "letter " << chars[i] << " does not match current " << current << endl;
            if (count > longest) longest = count;
            count = 1;
            current = (char)chars[i];
        }
    }
    if (count > longest) longest = count;
    cout << longest;
}