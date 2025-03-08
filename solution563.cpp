#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> st;

long long a, b;

int main(int argc, char *argv[])
{
    string s;
    getline(cin, s);
    long long n = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != ' ' && s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
        {
            n *= 10;
            n += s[i] - '0';
        }
        else if (s[i] == ' ')
        {
            st.push(n);
            n = 0;
        }
        else
        {
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();

            if (s[i] == '+')
            {
                st.push(a + b);
            }
            else if (s[i] == '-')
            {
                st.push(a - b);
            }
            else if (s[i] == '*')
            {
                st.push(a * b);
            }
            else if (s[i] == '/')
            {
                st.push(a / b);
            }
        }
    }
    cout << st.top() << endl;
    st.pop();
    
    return 0;
}