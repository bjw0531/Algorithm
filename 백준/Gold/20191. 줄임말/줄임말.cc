#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <map>

using namespace std;

string S,T;
char newT[300003];
set<int> ts, ss;
map<int,set<int>> s;
int idx, cnt,ntCnt=0;

int main()
{
    cin >> S >> T;
    for(int i = 0; S[i]; i++)   s[S[i]];
    for(int i = 0; T[i]; i++)
    {
        if(s.find(T[i]) != s.end())
        {
            ts.insert(T[i]);
            newT[ntCnt++] = T[i];
            s[T[i]].insert(ntCnt);
        }
    }

    newT[ntCnt-1] = '\0';

    if(s.size() != ts.size())
    {
        cout << -1;
        return 0;
    }


    for(int i = 0; S[i]; i++)
    {
        auto it = s[S[i]].upper_bound(idx);
        if(it == s[S[i]].end())
        {
            cnt++;
            it = s[S[i]].begin();
        }
        idx = *it;
    }

    cout << cnt+1;
}
