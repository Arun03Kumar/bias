#include <bits/stdc++.h>
using namespace std;

int mn = INT_MAX;
int mx = INT_MIN;

// void recursion1(int arr[], int idx, int &mn, int &mx, int size)
// {

//     if (idx == size)
//         return;

//     mn = min(mn, arr[idx]);
//     mx = max(mx, arr[idx]);

//     recursion1(arr, idx + 1, mn, mx, size);
// }

// void recursion1(vector<int> arr, int idx, int &mn, int &mx)
// {

//     if (idx == arr.size())
//         return;

//     mn = min(mn, arr[idx]);
//     mx = max(mx, arr[idx]);

//     recursion1(arr, idx + 1, mn, mx);
// }

// void recursion1(vector<int> arr, int idx, int &mn, int &mx)
// {

//     if (idx == 0)
//         return;

//     mn = min(mn, arr[idx - 1]);
//     mx = max(mx, arr[idx - 1]);

//     recursion1(arr, idx - 1, mn, mx);
// }

// void recursion1(vector<int> arr, int idx, int &mn, int &mx)
// {

//     if (idx < 0)
//         return;

//     mn = min(mn, arr[idx]);
//     mx = max(mx, arr[idx]);

//     recursion1(arr, idx - 1, mn, mx);
// }

void recursion1(vector<int> arr, int idx)
{

    if (idx < 0)
        return;

    mn = min(mn, arr[idx]);
    mx = max(mx, arr[idx]);

    recursion1(arr, idx - 1);
}

int main()
{

    int arr[5] = {3, 2, 4, 1, 7};
    vector<int> arr2 = {3, 2, 4, 1, 7};

    int n = arr2.size();
    int m = sizeof(arr) / sizeof(arr[0]);

    // int mn = INT_MAX;
    // int mx = INT_MIN;

    // recursion1(arr, 0, mn, mx, m);
    // recursion1(arr2, n, mn, mx);
    // recursion1(arr2, n - 1, mn, mx);
    recursion1(arr2, n - 1);

    cout << mx << " " << mn;

    return 0;
}