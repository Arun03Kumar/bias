#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "aeiouAEIOU";

    int l = 0, r = str.size() - 1;

    while (l < r)
    {

        while (l < r && str.find(str[l]) == string::npos)
        {
            l++;
        }

        while (l < r && str.find(str[r]) == string::npos)
        {
            r--;
        }

        if (l < r)
            swap(str[l++], str[r--]);
        }

    return 0;
}

// 1 -> vector
// 2 -> string

// leetcoed

// wwawwwwwweww

//     j = 2 i = 10

//     while (i < j)
// {
// }

"  hello world  "

    while (curr == ' ') j--;

temp += d + l + r + o + w temp = "dlrow"

    reverse(temp.begin(), temp.end());

ans += temp
    ans += " "

    while (curr == ' ') j--;

"abc good   example"

    temp = "cba"

    while (j >= 0)
{
}

if (!temp.empty())
{
    ans += temp;
}

//   if(ans.back() = ' '):;
//   ans.pop_back();