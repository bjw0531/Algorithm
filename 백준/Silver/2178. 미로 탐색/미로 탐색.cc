#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct Data
{
    int y,x,cnt;
};

int N,M,result;
int arr[105][105];
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

bool safe(int y, int x) { return y >= 1 && x >= 1 && y <= N && x <= M; }

void bfs()
{
    queue<Data> Q;
    Q.push({1,1});
    while(Q.size())
    {
        int y = Q.front().y,
            x = Q.front().x,
            cnt = Q.front().cnt;   Q.pop();

        if(y == N && x == M)
        {
            result = ++cnt;
            return;
        }

        for(int i = 0; i < 4; i++)
        {
            int yy = y + dy[i],
                xx = x + dx[i];
            if(safe(yy,xx) && arr[yy][xx] == 1)
            {
                arr[yy][xx] =  0;
                Q.push({yy,xx,cnt+1});
            }
        }
    }
}

int main()
{
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
    {
        string tmp;
        cin >> tmp;
        for(int j = 1; j <= M; j++)
        {
            arr[i][j] = tmp[j-1] - '0';
        }
    }
    bfs();
    cout << result;
}
