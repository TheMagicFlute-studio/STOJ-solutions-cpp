// 拉链法
#include <iostream>

using namespace std;

const int SIZE = 1e5+3;

/**
 * @brief make a big num;
 * @return a great num;
 */

inline unsigned my_abs(int x)
{
    return x < 0 ? -x : x;
}

inline unsigned my_hash(int x)
{
    return my_abs(x % SIZE);
    // return (x % SIZE + SIZE) % SIZE;
}

int table[SIZE], values[SIZE], nexts[SIZE], idx = 0;


void insert(int x)
{
    int k = my_hash(x);
    values[idx] = x;
    nexts[idx] = table[k];
    table[k] = idx++;
}

void query(int x)
{
    int k = my_hash(x);
    int p = table[k];
    while (p != -1)
    {
        if (values[p] == x)
        {
            cout << "Yes" << endl;
            return;
        }
        if (nexts[p] == -1)
        {
            break;
        }
        p = nexts[p];
    }
    cout << "No" << endl;
}

void init()
{
    for (int i = 0; i < SIZE; i++)
    {
        table[i] = -1;
    }
}

int main(int argc, char *argv[])
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        char op;
        cin >> op;
        int x;
        if (op == 'I')
        {
            cin >> x;
            insert(x);
        }
        else if (op == 'Q')
        {
            cin >> x;
            query(x);
        }
    }
    
    return 0;
}
