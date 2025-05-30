#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

queue<int> q,q2;
string s;
int ans;

int main()
{
    cin >> s;
    for(int i = 0; s[i]; i++)
    {
        if(s[i] == 'B') q.push(i);
        else if(s[i] == 'C' && q.size())
        {
            s[q.front()] = 'C';
            q.pop();
            ans++;
        }
    }


    for(int i = 0; s[i]; i++)
    {
        if(s[i] == 'A') q2.push(i);
        else if(s[i] == 'B' && q2.size())
        {
            q2.pop();
            ans++;
        }
    }
    cout << ans;
}
