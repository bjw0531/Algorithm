#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> name;
    vector<int> lvls;

    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        name.push_back(s);

        int k, m;
        cin >> k >> m;

        int lvl = 0;
        for(; m >= k;)
        {
            m -= k;
            lvl += 1;
            m += 2;
        }
        lvls.push_back(lvl);
    }
    int mx = *max_element(lvls.begin(), lvls.end());
    int sm = accumulate(lvls.begin(), lvls.end(), 0);

    cout << sm << endl;
    for(int i = 0; i < lvls.size(); i++)
    {
        if(lvls[i] == mx)
        {
            cout << name[i] << endl;
            break;
        }
    }
}
