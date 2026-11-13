#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 2; i < n; i++)
    // {
    //     bool flag = false;
    //     for (int j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             flag = true;
    //         }
    //     }
    //     if (flag == false)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // for (int i = 2; i < n; i++)
    // {
    //     bool flag = false;
    //     // for (int j = 2; j < sqrt(i); j++)
    //     for (int j = 2; j * j < i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             flag = true;
    //         }
    //     }
    //     if (flag == false)
    //     {
    //         cout << i << endl;
    //     }
    // }

    for (int i = 2; i < n; i++)
    {
        if (i == 2)
        {
            cout << i << endl;
        }
        if (i % 2 == 0)
        {
            // cout << i << endl;
            continue;
        }
        bool flag = false;
        for (int j = 3; j * j <= i; j += 2)
        {
            if (i % j == 0)
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            cout << i << endl;
        }
    }
}