#include <bits/stdc++.h>
using namespace std;

int need(vector<int> &bloomDay, int mid, int k)
{

    return total;
}

[ 7, 7, 7, 7, 12, 7, 7, 7 ]

    int
    main()
{
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3, k = 2;
    if (m * k > bloomDay.size())
    {
        cout << -1 << endl;
        return 0;
    }
    int l = 1, r = *max_element(bloomDay.begin(), bloomDay.end());
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        int count = 0;
        int total = 0;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            if (bloomDay[i] <= mid)
            {
                count++;
            }
            else
            {
                total += count / k;
                count = 0;
            }
        }

        total += count / k;
        if (toatal >= m)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;

    return 0;
}

// bloomDay = [1,10,3,10,2], m = 3, k = 1
// [1,10,3,10,2], m = 3, k = 2