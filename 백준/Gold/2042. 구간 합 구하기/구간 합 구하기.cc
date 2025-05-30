#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;

ll N,M,K;
ll sg[4000005];
ll arr[1000005];

ll sginit(ll idx, ll s, ll e)
{
    if(s == e)  return sg[idx] = arr[s];
    ll m = (s+e)/2;
    return sg[idx] = sginit(idx*2, s, m) + sginit(idx*2+1, m+1,e);
}

ll sgsum(ll idx, ll s, ll e, ll l, ll r)
{
    if(e < l || s > r)      return 0;
    if(s >= l && e <= r)    return sg[idx];

    ll m = (s+e)/2;
    return sgsum(idx*2, s, m, l, r) + sgsum(idx*2+1, m+1, e, l, r);
}

void sgupdate(ll idx, ll s, ll e, ll aidx, ll diff)
{
    if(aidx < s || aidx > e)  return;
    sg[idx] += diff;
    if(s != e)
    {
        ll m = (s+e)/2;
        sgupdate(idx*2,s,m,aidx,diff);
        sgupdate(idx*2+1,m+1,e,aidx,diff);
    }
}

int main()
{
    cin >> N >> M >> K;
    for(ll i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }

    sginit(1,1,N);

    for(ll i = 1, tmp, a, b; i <= M+K; i++)
    {
        cin >> tmp >> a >> b;
        if(tmp == 1)
        {
            ll diff = b - arr[a];
            sgupdate(1,1,N,a,diff);
            arr[a] = b;
        }
        if(tmp == 2)    cout << sgsum(1,1,N,a,b) << endl;
    }
}
