#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n,m,r;
int item[105];
int edge[105][105];
int visit[105];
int maxitem;
int sum = 0;

void fw()
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                edge[i][j] = min(edge[i][j], edge[i][k] + edge[k][j]);
                if(i == j)  edge[i][j] = 0;
            }
        }
    }
}

int main()
{
    fill(&edge[0][0], &edge[105][105], 987654321);
    cin >> n >> m >> r;
    for(int i = 1; i <= n; i++) cin >> item[i];
    for(int i = 1,a,b,d; i <= r; i++)
    {
        cin >> a >> b >> d;
        edge[a][b] = d;
        edge[b][a] = d;
    }

    fw();
    for(int i = 1, tmpsum; i <= n; i++)
    {
        tmpsum = 0;
        for(int j = 1; j <= n; j++)
        {
            if(edge[i][j] <= m) tmpsum += item[j];
        }
        sum = max(sum, tmpsum);
    }
    cout << sum;
}
