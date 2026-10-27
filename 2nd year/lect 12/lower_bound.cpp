#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 5, 5, 6, 7, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    int l = 0, r = n - 1;
    int target = 5;

    int ans = n;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (target <= arr[mid])
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans;

    return 0;
}