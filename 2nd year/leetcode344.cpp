#include <iostream>
using namespace std;

int main()
{
    int l = 0, r = arr.size() - 1;

    while (left <= right)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }

    int j = arr.size() - 1;
    for (int i = 0; i < arr.size() / 2; i++)
    {
        swap(arr[i], arr[j]);
        j--;
    }

    return 0;
}

[ "h", "a", "n", "z", "n", , "a", "H" ]
