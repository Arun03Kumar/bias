#include <bits/stdc++.h>
using namespace std;

void recursion(vector<int> &nums, int idx, vector<int> &curr, vector<vector<int>> &ans)
{
    if (idx == nums.size())
    {
        ans.push_back(curr);
        return;
    }

    curr.push_back(nums[idx]);
    recursion(nums, idx + 1, curr, ans);

    curr.pop_back();
    recursion(nums, idx + 1, curr, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> curr;
    vector<vector<int>> ans;
    recursion(nums, 0, curr, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);

    for (auto &subset : ans)
    {
        cout << "[ ";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
