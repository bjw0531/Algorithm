#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int N;
ll arr[100005];
ll *p1, *p2;
ll n1,n2,result = 98765432100;


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> N;
    for(int i = 1, num; i <= N; i++)
    {
        cin >> num;
        arr[i] = num;
    }
    sort(arr+1,arr+N+1,greater<ll>());


    p1 = arr+1; p2 = arr+N;
    while(p1 < p2)
    {
        ll sum = *p1 + *p2;
        if(abs(sum) < result)
        {
            result = abs(sum);
            n1 = *p1;
            n2 = *p2;
        }
        if(sum > 0)
        {
            if(p1 != arr+N) p1++;
            else            break;
        }
        else if(sum < 0)
        {
            if(p2 != arr+1) p2--;
            else            break;
        }

        else                break;
    }
    cout << min(n1,n2) << ' ' << max(n1,n2) << endl;
}
