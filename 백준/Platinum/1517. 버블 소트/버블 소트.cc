#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
vector<ll> v, v2;
ll sg[2000005], visit[500005];
ll ans = 0;


ll init(ll idx, ll s, ll e)
{
    if (s == e)  return sg[idx] = visit[s];

    ll m = (s + e) / 2;
    return sg[idx] = init(idx * 2, s, m) + init(idx * 2 + 1, m + 1, e);
}

ll sum(ll idx, ll s, ll e, ll left, ll right)
{
    if (right == 0)  return 0;
    if (left > e || right < s)   return 0;
    if (s >= left && e <= right) return sg[idx];
    ll m = (s + e) / 2;
    return sum(idx * 2, s, m, left, right) + sum(idx * 2 + 1, m + 1, e, left, right);
}

void update(ll idx, ll s, ll e, ll index, ll diff)
{
    if (index < s || index > e)  return;
    sg[idx] += diff;

    if (s != e)
    {
        ll m = (s + e) / 2;
        update(idx * 2, s, m, index, diff);
        update(idx * 2 + 1, m + 1, e, index, diff);
    }
}

int main()
{
    ll N;
    cin >> N;
    v.reserve(N);
    v2.reserve(N);
    for (ll i = 0, tmp; i < N; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
        v2.push_back(tmp);
    }
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());
    for (ll& k : v)  k = lower_bound(v2.begin(), v2.end(), k) - v2.begin() + 1;
    init(1, 1, N);

    for (int i = N; i--;)
    {
        ans += sum(1, 1, N, 1, v[i] - 1);
        update(1, 1, N, v[i], 1);
    }
    cout << ans;

}
