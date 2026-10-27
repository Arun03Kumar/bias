#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i = 0, j = arr.size() - 1;

    while(i < j)
    {
        int mid = i + (j - i) / 2;

        if(mid % 2 == 0)
        {
            if(arr[mid] == arr[mid + 1])
            {
                i = mid + 2;
            }
            else
            {
                j = mid;
            }
        }
        else
        {
            if(arr[mid] == arr[mid - 1])
            {
                i = mid + 1;
            }
            else
            {
                
                j = mid - 1;
            }
        }
    }

    return 0;
}


[3,3,7,7,10,11,11]


mid -> 4 -> odd -> 



