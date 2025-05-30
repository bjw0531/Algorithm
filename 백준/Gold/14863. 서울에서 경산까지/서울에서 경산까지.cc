#include <iostream>
#include <cstdio>
using namespace std;

int a[101][100001];

struct CITY { int t1, m1, t2, m2; };
CITY c[101];

int N,K;
int cnt=0;

void input()
{
    cin >> N >> K;
    for(int i=1; i<=N; i++) {
        cin >> c[i].t1 >> c[i].m1 >> c[i].t2 >> c[i].m2;
    }
}

int dfs(int k, int t)
{
    if(t < 0)  return -987654321;
    if(k <=0)  return 0;
    if(a[k][t] == 0)
    {
        int ma = dfs(k-1,t-c[k].t1) + c[k].m1;
        int mb = dfs(k-1,t-c[k].t2) + c[k].m2;
        a[k][t] = max(ma,mb);

    }
    return a[k][t];
}


int main()
{
    input();
    cout << dfs(N,K) << endl;
    return 0;
}
