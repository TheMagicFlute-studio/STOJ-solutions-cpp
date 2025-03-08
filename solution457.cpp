/*
手写stack方法

#include <iostream>
#include <cstring>

using namespace std;

int stack[10010];
int top = -1;

int main(int argc, char *argv[])
{
    char op;
    int n, x;

    while (cin >> n, n)
    {
        memset(stack, 0, sizeof(stack));
        top = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> op;
            if (op == 'P')
            {
                cin >> x;
                stack[++top] = x;
            }
            else if (op == 'O')
            {
                if (top != -1)
                    top--;
            }
            else if (op == 'A')
            {
                if (top == -1)
                {
                    cout << "E" << endl;
                }
                else
                {
                    cout << stack[top] << endl;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
*/

#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main(int argc, char *argv[])
{
    char op;
    int n, x;

    while (cin >> n, n)
    {
        while (!s.empty())
            s.pop();
        while (n--)
        {
            cin >> op;
            if (op == 'P')
            {
                cin >> x;
                s.push(x);
            }
            else if (op == 'O')
            {
                if (!s.empty())
                    s.pop();
            }
            else if (op == 'A')
            {
                if (s.empty())
                {
                    cout << "E" << endl;
                }
                else
                {
                    cout << s.top() << endl;
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}