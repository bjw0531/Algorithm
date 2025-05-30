#include <bits/stdc++.h>
using namespace std;

int a[100],b[100],c[100];
int N, cnt=0;

void dfs(int y)
{
    if(y == N)
    {
        cnt++;
        return;
    }
    for(int x=0; x<N; x++)
    {
        if(a[x] == 0 && b[y+x] == 0 && c[y-x+N] == 0)
        {
            a[x] = b[y+x] = c[y-x+N] = 1;
            dfs(y+1);
            a[x] = b[y+x] = c[y-x+N] = 0;
        }
    }
}

int main()
{
    cin >> N;

    dfs(0);

    cout << cnt;
}
