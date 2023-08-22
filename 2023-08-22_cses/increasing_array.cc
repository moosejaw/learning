/*
    increase value of each element by one

    3 2 5 1 7
    
    move 1: 3 3 5 1 7
    move 2: 3 3 5 2 7
    move 3: 3 3 5 3 7
    move 4: 3 3 5 4 7
    move 5: 3 3 5 5 7

    5 moves is the minimum

    iterate from beginning of array + 1 (i),
    
    if array[i] >= array[i - 1]  --> continue

    if array[i] < array[i - 1]   --> increment array[i], and increment move counter
    repeat above until array[i] == array[i - 1]

    once done iterating print move counter


    ---
    corrected version

    take the difference of array[i - 1] and array[i]
    and add result to move counter
*/
#include <iostream>
using namespace std;

int main()
{
    unsigned n;
    cin >> n;

    long long arr[n] = {};
    for (unsigned i = 0; i < n; ++i) cin >> arr[i];

    long long move_counter = 0;
    for (unsigned i = 1; i < n; ++i)
    {
        if (arr[i] >= arr[i - 1]) continue;

        long long diff = arr[i - 1] - arr[i];
        move_counter += diff;

        arr[i] = arr[i - 1];

        // // from attempt 1:
        // while (arr[i] < arr[i - 1])
        // {
        //     arr[i]++;
        //     move_counter++;
        // }
    }

    cout << move_counter;
}
