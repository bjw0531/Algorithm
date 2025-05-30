#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int arr[1005][1005];
int check[1005][2];
int N,M,V;

void dfs(int v)
{
    check[v][0] = 1;
    cout << v << ' ';
    for(int i = 1; i <= N; i++)
    {
        if(arr[v][i] && check[i][0] == 0)   dfs(i);
    }
}

void bfs(int v)
{
    queue<int> Q;
    check[v][1] = 1;
    Q.push(v);
    while(Q.size())
    {
        int v = Q.front();  Q.pop();
        cout << v << ' ';
        for(int i = 1; i <= N; i++)
        {
            if(arr[v][i] && check[i][1] == 0)
            {
                check[i][1] = 1;
                Q.push(i);
            }
        }
    }
}

int main()
{
    cin >> N >> M >> V;

    for(int i = 1,a,b; i <= M; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    dfs(V);
    cout << endl;
    bfs(V);
    cout << endl;
}
