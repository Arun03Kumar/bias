[ 0, 1, 2, 3, 4, 1, 2, 2, 3, 3, 4 ]

    int j = 1;
for (int i = 1; i < nums.size(); i++)
{
    if (nums[i] != nums[i - 1])
    {
        nums[j] = nums[i];
        j++;
    }
}

return j;

[ 3, 3, 7, 7, 10, 11, 11 ]

    mid->3;

while (l < r)
{
    mid = l + (r - l) / 2;
    mid->even if (mid % 2 == 0)
    {
        if (arr[mid] == arr[mid + 1])
        {
            l = mid + 2;
        }
        else
        {
            r = mid;
        }
    }
    else
    {
        if (arr[mid] == arr[mid - 1])
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    if (arr[mid] == arr[mid + 1])
    {
        if (mid % 2 == 0)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    else if (arr[mid] == arr[mid + 1])
    {
        if (mid % 2 == 0)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    else
    {
        return arr[mid];
    }
