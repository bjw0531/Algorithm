#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int M,N,K,T;
int arr[55][55];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
vector<int> result;


bool safe(int y, int x) { return x >= 0 && y >= 0 && x < M && y < N; }

void input()
{

    cin >> M >> N >> K;
    for(int i = 0,y,x; i < K; i++)
    {
        cin >> x >> y;
        arr[y][x] = 1;
    }
}

void bfs(int y, int x)
{
    queue<pair<int,int>> Q;
    arr[y][x] = 0;
    Q.push({y,x});
    while(Q.size())
    {
        int y = Q.front().first,
            x = Q.front().second;   Q.pop();

        for(int i = 0; i < 4; i++)
        {
            int yy = y + dy[i],
                xx = x + dx[i];
            if(safe(yy,xx) && arr[yy][xx] == 1)
            {
                arr[yy][xx] = 0;
                Q.push({yy,xx});
            }
        }
    }
}

void solve()
{
    int cnt = 0;
    for(int y = 0; y < N; y++)
    {
        for(int x = 0; x < M; x++)
        {
            if(arr[y][x] == 1)
            {
                cnt++;
                bfs(y,x);
            }
        }
    }
    result.push_back(cnt);
}


int main()
{
    cin >> T;
    for(;T--;)
    {
        input();
        solve();
    }
    for(auto i:result)  cout << i << endl;
}
