#include <iostream>
#include <queue>

using namespace std;

int X,Y;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int arr[1005][1005];
int tomatocnt, lasttomatocnt;
int daycnt;
queue<pair<int,int>> Q;

bool safe(int y, int x) { return y >= 1 && x >= 1 && y <= Y && x <= X; }

int bfs()
{
    if(tomatocnt == 0)  return 0;
    while(Q.size())
    {
        int y = Q.front().first,
            x = Q.front().second;   Q.pop();

        if(y == -1)
        {
            if(lasttomatocnt == tomatocnt)  return -1;
            daycnt++;
            if(tomatocnt == 0)              return daycnt;
            lasttomatocnt = tomatocnt;
            Q.push({-1,-1});
            continue;
        }

        for(int i = 0; i < 4; i++)
        {
            int yy = y + dy[i],
                xx = x + dx[i];
            if(safe(yy, xx) && arr[yy][xx] == 0)
            {
                Q.push({yy,xx});
                arr[yy][xx] = 1;
                tomatocnt--;
            }
        }
    }
    return -1;
}

int main()
{
    cin >> X >> Y;
    for(int i = 1; i <= Y; i++)
    {
        for(int j = 1,tmp; j <= X; j++)
        {
            cin >> tmp;
            arr[i][j] = tmp;
            if(tmp == 0)    tomatocnt++;
            if(tmp == 1)    Q.push({i,j});
        }
    }
    Q.push({-1,-1});
    cout << bfs();
}
