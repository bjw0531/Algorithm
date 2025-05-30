#include <iostream>
using namespace std;

int cnt0[1000], cnt1[1000];
int cache[10000];

void fibonacci(int n, int i)
{
    if(n == 0)
    {
        cnt0[i] = 1;
        cnt1[i] = 0;
        return;
    }
    for(int i = 2; i <= n; i++)
    {
        cache[i] = cache[i-1] + cache[i-2];
    }
    cnt0[i] = cache[n-1];
    cnt1[i] = cache[n];
}

int main()
{
    cache[0] = 0;
    cache[1] = 1;
    int tmp;
    cin >> tmp;

    for(int i = 0,a; i < tmp; i++)
    {
        cin >> a;
        fibonacci(a,i);
    }
    for(int i = 0; i < tmp; i++)
    {
        cout << cnt0[i] << ' ' << cnt1[i] << endl;
    }

}
