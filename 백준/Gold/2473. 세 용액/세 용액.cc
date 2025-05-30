#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int N;
ll arr[100005];
ll *p1, *p2, *P;
ll number[3],result = 98765432100;


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


    for(int i = 1; i <= N-2; i++)
    {
        P = arr+i;
        p1 = P+1; p2 = arr+N;
        while(p1 < p2)
        {
            ll sum = *p1 + *p2 + *P;
            if(abs(sum) < result)
            {
                result = abs(sum);
                number[0] = *p1;
                number[1] = *p2;
                number[2] = *P;
            }
            if(sum > 0)         p1++;
            else if(sum < 0)    p2--;
            else                break;
        }
    }
    sort(number, number+3);
    cout << number[0] << ' ' << number[1] << ' ' << number[2] << endl;
}
