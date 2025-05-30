#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;


int main()
{
    ll N;
    cin >> N;

    ll tmp;
    ll cnt0 = 0, cnt1 = 0;
    ll ans0 = 0, ans1 = 0;
    for(ll i = 0; i < N; i++)
    {
        cin >> tmp;
        if(tmp % 2 == 0)
        {
            cnt0++;
            ans0 += cnt1;
        }
        else
        {
            cnt1++;
            ans1 += cnt0;
        }
    }
    cout << min(ans0, ans1);
}
