#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int n,m;
int cnt = 0;
int maxsz = 0;
int arr[505][505];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool safe(int y, int x)
{
    return 0 <= y && y < n && 0 <= x && x < m;
}

void bfs(int y, int x)
{
    int yy,xx;
    int sz = 0;

    queue<pair<int,int>> Q;

    Q.push({y, x});
    arr[y][x] = 2;

    while(!Q.empty())
    {
        sz++;
        y = Q.front().first;
        x = Q.front().second;
        Q.pop();

        for(int i = 0; i < 4; i++)
        {
            yy = y + dy[i];
            xx = x + dx[i];
            if(safe(yy,xx) && arr[yy][xx] == 1)
            {
                arr[yy][xx] = 2;
                Q.push({yy, xx});
            }
        }
    }
    maxsz = max(sz, maxsz);
    cnt++;
}

int main()
{
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0,tmp; j < m; j++)  cin >> arr[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == 1)
                bfs(i,j);
        }
    }

    cout << cnt << endl;
    cout << maxsz << endl;
}
