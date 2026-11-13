#include <iostream>
#include <vector>
using namespace std;

class Stack
{
public:
    vector<int> arr;

    void push(int x)
    {
        arr.push_back(x);
    }

    void pop()
    {
        if (!arr.empty())
        {
            int top = arr.back();
            arr.pop_back();
            // return top;
        }
    }

    int top()
    {
        if (!arr.empty())
        {
            return arr.back();
        }
        return -1; // or throw an exception
    }

    bool empty()
    {
        return arr.empty();
    }
};

int main()
{

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}