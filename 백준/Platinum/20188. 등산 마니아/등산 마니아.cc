#include <iostream>
#include <bits/stdc++.h>
typedef long long LL;

using namespace std;


vector<LL> v[300005];
LL cldcnt[300005];
LL N;
LL ans,total;


void dfs(LL p)
{
    cldcnt[p] = v[p].size();
    for(LL q : v[p])
    {
        v[q].erase(find(v[q].begin(), v[q].end(), p));
        dfs(q);
        cldcnt[p] += cldcnt[q];
    }

    if(p != 1)
    {
        LL k = N - cldcnt[p] - 1;
        ans += total - k*(k-1)/2;
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    total = N*(N-1)/2;
    for(LL i = 0,a,b; i < N-1; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    cout << ans;
}
