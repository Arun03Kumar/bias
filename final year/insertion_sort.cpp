#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{

    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            // swap(arr[j], arr[j + 1]);
            j--;
        }
        // arr[j + 1] = key;
    }
}

int main()
{
    std::vector<int> arr = {4, 5, 6, 9, 5, 6};

    insertionSort(arr);

    for (int x : arr)
    {
        cout << x << " ";
    }
}
