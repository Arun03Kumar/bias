#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // int count = 0;
    // for (int i = 2; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //         break;
    //     }
    // }

    // for (int i = 2; i <= n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //         break;
    //     }
    // }

    int num;
    cin >> num;

    for (int n = 2; n <= num; n++)
    {
        int count = 0;
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
                // break;
            }
        }
        if (count < 2)
        {
            cout << n << " ";
        }
    }

    return 0;
}