#include <bits/stdc++.h>

using namespace std;

int main()
{

    // cout << "hello world \n";
    // cout << "hello world" << endl << "again new line";
    // cout << "new line";

    // data types:
    // integers -> short, int, long, long long
    // floating point number -> float, double, long double
    // char
    // bool
    // void

    // data_type var_name = value;
    // long long a = 10;
    // float x = 10.5;
    // double y = 10.5;
    // long double z = 10.5;

    // int x = 100000;
    // int y = 100000;
    // int z = x * y;
    // cout << z << endl;

    // bool is_true = false;
    // cout << is_true << endl;

    // char ch = 'a';
    // cout << ch + 1;

    // string name = "John";
    // cout << name << endl;

    // cout << data;
    // int a;
    // cin >> a;
    // cout << a << endl;

    // int age;

    // cin >> age;
    // cin.ignore();

    // cin >> name;
    // cout << name << endl;

    // string name;
    // getline(cin, name);
    // cout << name << endl;

    // 28 john doe\n

    // control flow

    // if(2 + 2) {
    //     cout << "condition is true" << endl;
    // }
    // else {
    //     cout << "condition is false" << endl;
    // }

    // int a = 100000;
    // int b = 100000;

    // long long c = a * 1LL * b;

    // array -> homogeneous, heterogeneous
    // data_type arr_name[size];

    // int n;
    // cin >> n;
    // int n = 4;
    // int arr[n] = {10, 20, 30, 40};

    // arr[0]  = 10;
    // arr[1]  = 20;
    // arr[2]  = 30;
    // arr[3]  = 40;
    // cout << arr[15];

    // for(int i = 0; i < 5; i++) {
    //     cin >> arr[i];
    // }

    // arr[0] -> arr + 1 * sizeof(int)

    // vector<data_type> arr;

    vector<int> arr = {20, 10, 60, 50, 30, 40, 50};
    // cout << arr[10] << endl;

    // cout << arr.size() << endl;

    arr.push_back(60);
    arr.pop_back();

    // sort(arr.begin(), arr.end());
    sort(begin(arr), end(arr), greater<int>());

    for (int i = 0; i < arr.size(); i++)
    {
        // cout << arr[i] << " ";
        // if(arr[i] == 50) {
        //     cout << "found at index: " << i << endl;
        // }
    }

    // reverse(begin(arr), end(arr));

    return 0;
}

// {20, 10, 60, 50, 30, 40, 70} int max_elemnt = 70;