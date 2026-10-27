#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    int l = 0, r = n - 1;
    int target = 10;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == target)
        {
            cout << "element found at " << mid << " index";
            break;
        }
        else if (target < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (l > r)
        cout << "element not found";

    return 0;
}