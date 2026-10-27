#include <iostream>
using namespace std;

int ans;

// void recursion(int x) {
//     if(x > 100) return;
//     cout << x << endl;
//     recursion(x + 1);
// }

void reverse(int n)
{
    if (n == 0)
        return;
    int rem = n % 10;
    ans = ans * 10 + rem;

    reverse(n / 10);
}

int main()
{

    // recursion(1);
    int n = 1234;
    // int ans = 0;
    reverse(n);
    cout << ans << endl;
    return 0;
}
