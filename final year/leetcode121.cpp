class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
    }
};

// [7,1,5,3,6,4]

int ans = 5;

for (int i = 0; i < prices.size(); i++)
{
    int buy = prices[i];
    for (int j = i + 1; j < prices.size(); j++)
    {
        int sell = prices[j];

        int profit = sell - buy;
        ans = max(ans, profit);
        //    if(profit > ans)
        //    {
        //        ans = profit;
        //    }
        ans = max(ans, profit);
    }
}

int ans = -1;
int buy = 1;
for (int i = 1; i < prices.size(); i++)
{
    int sell = prices[i];
    int profit = sell - buy;
    ans = max(ans, profit);
    buy = min(buy, sell);
}