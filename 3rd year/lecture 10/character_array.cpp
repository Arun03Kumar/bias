#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char arr[5] = {'H', 'e', 'l', 'l', 'o'};
    // char arr2[] = {'W', 'o', 'r', 'l', 'd'};
    // char arr3[] = "Hello World";
    // char arr4[100] = "Hello World";

    // int n;
    // cin >> n;

    // char name[100];
    // // cin >> name;
    // cin.ignore();
    // cin.getline(name, 100);
    // cout << name << endl;

    // char arr[100];

    // char ch;
    // cin.get(ch);

    // int i = 0;
    // while (ch != '#')
    // {

    //     arr[i] = ch;
    //     i++;
    //     // cin >> ch;
    //     cin.get(ch);
    // }
    // arr[i] = '\0';
    // cout << arr << endl;

    // write a program to take input a string from user and print it in reverse order

    char arr[100];
    cin.getline(arr, 100);

    int n = strlen(arr);
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << arr[i];
    // }
    // cout << endl;

    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}