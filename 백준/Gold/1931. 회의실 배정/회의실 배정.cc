#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>
#define int long long
using namespace std;
int n;
vector<pair<int, int>> arr;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;}

int32_t main()
{
    cin >> n;

    for (int i = 0, a, b; i < n; i++)
    {
        pair<int, int> t;
        cin >> t.first >> t.second;
        arr.push_back(t);
    }

    sort(arr.begin(), arr.end(), cmp);

    int ans = 0;
    int current_time = 0;
    for (pair<int, int> t : arr)
    {
        if (current_time <= t.first)
        {
            current_time = t.second;
            ++ans;
        }
    }

    cout << ans << endl;
}
