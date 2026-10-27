#include <bits/stdc++.h>
using namespace std;

int main()
{
    // char arr[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    // // cout << arr;

    // char arr2[6] = "abcde";
    // cout << arr2 << endl;

    // char arr3[100];
    // cin.width(6);
    // cin >> arr3;

    // int n;
    // cin >> n;

    // cin.ignore(); // Ignore the newline character left in the input buffer
    // cin.getline(arr3, 10);

    // cout << arr3 << endl;

    char arr[100];

    char ch;
    cin >> ch;

    int i = 0;
    while (ch != '#')
    {
        arr[i] = ch;
        i++;
        cin.get(ch);
    }
    arr[i] = '\0'; // Null-terminate the character array
    cout << arr << endl;
}