#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int sum(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << fib(i) << " ";
    }
    // cout << endl;
    return 0;
}