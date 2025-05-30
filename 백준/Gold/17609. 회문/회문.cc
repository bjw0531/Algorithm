#include <iostream>
#include <vector>
#include <string>

using namespace std;
int T;

int solve(string s, int depth)
{
    if(depth == 2)  return 2;

    int f = 0;
    int b = s.size()-1;
    int cnt = 0;

    while(cnt <= 1)
    {
        if(f >= b)  break;

        if(s[f] == s[b])
        {
            f++;
            b--;
            continue;
        }
        if(s[f] != s[b])
        {
            cnt++;
            if(solve(s.substr(f,b-f), depth + 1) == 0 || solve(s.substr(f+1,b-f), depth + 1) == 0)
                break;
        }
    }
    return cnt;
}

int main()
{
    cin >> T;
    for(;T--;)
    {
        string s;
        cin >> s;
        cout << solve(s,0) << endl;
    }
}
