#include <iostream>
using namespace std;

int main()
{
    int x = (5 > 8) ? (10) : ((1 != 1) ? 20 : 30);
    cout << x << endl;
    return 0;
}