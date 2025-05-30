#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
using namespace std;


struct tribe
{
    int y,x,c;
};

int N, K, day, world[2005][2005], group[100005],
    dy[4] = {0,1,0,-1}, dx[4] = {1,0,-1,0}, doneflag;

int grpcnt;
queue<tribe> Q;
bool is_Safe(int y, int x), grpcheck();
void bfs(), QPush(int y, int x, int c);
int getGroup(int idx);
void printworld();

int main()
{
    cin >> N >> K;

    grpcnt = K;
    for(int i = 1,y,x; i <= K; i++)
    {
        scanf("%d %d",&x,&y);
        world[y][x] = i;
        group[i] = i;
        QPush(y,x,i);
    }
    Q.push({-1,-1,-1});
    //printworld();
    bfs();

    cout << day;
}

void bfs()
{
    if(grpcnt == 1) return;
    day = 1;
    while(Q.size())
    {
        int y = Q.front().y,
            x = Q.front().x,
            c = Q.front().c;
        Q.pop();

        if(y == -1)
        {
            //printworld();
            if(Q.empty())   return;
            day++;
            Q.push({-1,-1,-1});
            continue;
        }

        for(int i = 0,yy,xx; i < 4; i++)
        {
            yy = y + dy[i];
            xx = x + dx[i];

            if(is_Safe(yy,xx) && world[yy][xx] == 0)
            {
                world[yy][xx] = c;
                QPush(yy,xx,c);
                if(grpcnt == 1) return;
            }
        }

    }
}

bool is_Safe(int y, int x)
{
    return y >= 1 && x >= 1 && y <= N && x <= N;
}

void QPush(int y, int x, int c)
{
    Q.push({y,x,c});
    int parA = getGroup(c), parB;

    for(int i = 0,yy,xx; i < 4; i++)
    {
        yy = y + dy[i], xx = x + dx[i];

        if(is_Safe(yy,xx) && world[yy][xx] != c && world[yy][xx] != 0)
        {
            parB = getGroup(world[yy][xx]);
            if(parA != parB)
            {
                group[parB] = parA;
                grpcnt--;
            }
        }
    }
}

int getGroup(int idx)
{
    if(group[idx] == idx)   return idx;
    else return group[idx] = getGroup(group[idx]);
}

void printworld()
{
    cout << endl;
    for(int i = 1; i <= N; i++) printf("■");
    cout << endl;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(world[i][j] == 0)    printf("  ");
            else    printf("＃");
        }
        cout << endl;
    }
    for(int i = 1; i <= N; i++) printf("■");
    cout << endl;
    for(int i = 1; i <= K; i++)
    {
        printf("%d ",group[i]);
    }
    cout << endl;
    printf("%d\n",grpcnt);
    cout << endl;
    cout << endl;
}
