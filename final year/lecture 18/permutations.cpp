#include <bits/stdc++.h>
using namespace std;

void recursion(string &s, int idx)
{

    if (idx == s.size())
    {
        cout << s << endl;
        return;
    }

    for (int i = idx; i < s.size(); i++)
    {
        swap(s[idx], s[i]);
        recursion(s, idx + 1);
        swap(s[idx], s[i]); // backtrack
    }
}

int main()
{
    string s = "ABC";
    recursion(s, 0);
    return 0;
}