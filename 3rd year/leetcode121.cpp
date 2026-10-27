[ 7, 1, 5, 3, 6, 4 ]

    // ans = 0
    // for i -> 0 - size:
    //     buy = arr[i]
    //     for j -> i + 1 -> size:
    //         profit = arr[j] - arr[i];
    //             if(profit > ans) ans = profit
    //             ans = max(ans, profit)

    min = arr[0];
ans = 0 for (i - 1->size())
{
    profit = arr[i] - min;
    ans = max(ans, profit);
    min = min(min, arr[i]);
}
