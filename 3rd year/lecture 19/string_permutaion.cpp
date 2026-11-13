#include <iostream>
using namespace std;

string arr = "BCA";

void permute(int idx, string curr, int n)
{
    if (idx == n)
    {
        cout << curr << endl;
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[idx], arr[i]);
        permute(idx + 1, curr + arr[idx], n);
        swap(arr[idx], arr[i]);
    }
}

int main()
{
    permute(0, "", arr.size());
    return 0;
}