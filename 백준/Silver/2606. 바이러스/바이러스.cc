#include <stdio.h>

int graph[200][200];
int visit[200];
int n,k;
int cnt;

void connect(int from, int to)
{
    graph[from][to] = graph[to][from] = 1;
}

void dfs(int node)
{
    for(int i = 1; i <= n; i++)
    {
        if(visit[i] == 0 && graph[node][i] == 1)
        {
            cnt++;
            visit[i] = 1;
            dfs(i);
        }
    }
}

int main()
{

    scanf("%d %d",&n, &k);

    for(int i = 0; i < k; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        connect(x,y);
    }

    visit[1] = 1;
    dfs(1);

    printf("%d",cnt);
}
