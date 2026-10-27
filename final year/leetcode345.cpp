#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <string>

using namespace std;

int main()
{

    string s = "aeiouAEIOU";
    int i = 0, j = s.size() - 1;

    while (i < j)
    {
        while (i < j && s.find(str[i]) == string::npos)
        {
            i++;
        }
        while (i < j && s.find(str[j]) == string::npos)
        {
            j--;
        }

        swap(str[i], str[j]);
    }
}

// leetcoed

1->vector 2->string