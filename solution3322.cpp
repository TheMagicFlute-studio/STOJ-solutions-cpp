#include <iostream>

using namespace std;

int queue[10010], head = 0, tail = 0;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;

    while (n--)
    {
        int op, x;
        cin >> op;
        if (op == 1)
        {
            cin >> x;
            queue[tail++] = x;
        }
        else if (op == 2)
        {
            if (head == tail)
            {
                cout << "ERR_CANNOT_POP" << endl;
            }
            else
            {
                head++;
            }
        }
        else if (op == 3)
        {
            if (head == tail)
            {
                cout << "ERR_CANNOT_QUERY" << endl;
            }
            else
            {
                cout << queue[head] << endl;
            }
        }
        else if (op == 4)
        {
            cout << tail - head << endl;
        }
    }
    
    return 0;
}