#include <iostream>
using namespace std;

void change(int &a, int &b)
{
    a = 15;
    b = 20;
}

int main()
{
    int a = 10;
    int b = 8;
    cout << a << " " << b << endl;
    change(a, b);
    cout << a << " " << b << endl;
    return 0;
}
