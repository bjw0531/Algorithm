#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int> st;

void push(int x)
{
    st.push(x);
}

void top()
{
    if(!st.empty())
        cout << st.top() << endl;
    else
        cout << -1 << endl;
}

void size()
{
    cout << st.size() << endl;
}

void empty()
{
    if(st.empty())
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

void pop()
{
    if(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    else
        cout << -1 << endl;

}

int main()
{
    int cnt;
    string a,b;
    cin >> cnt;
    for(int i = cnt; cnt--;)
    {
        cin >> a;
        if(a == "push")
        {
            cin >> b;
            int c = stoi(b);
            push(c);
        }
        else if(a == "pop")     pop();
        else if(a == "size")    size();
        else if(a == "empty")   empty();
        else if(a == "top")     top();
    }
}
