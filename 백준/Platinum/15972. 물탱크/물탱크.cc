#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

// 0 => 위
// 1 => 오른쪽
// 2 => 아래쪽
// 3 => 왼쪽

struct Data
{
    int y, x, p, h;
    bool operator <(const Data& opp) const { return h > opp.h; }
};

int edge[1004][1004][4];
int chk[1004][1004];
int N, M, H, sum = 0;
priority_queue<Data> pq;
void pqpush(int y, int x, int h, int p);

void input()
{
    cin >> N >> M >> H;
    for (int y = 1; y <= N + 1; y++)for (int x = 1, tmp; x <= M; x++)
    {
        cin >> tmp;
        if (tmp == -1)    tmp = H;
        edge[y - 1][x][2] = tmp;
        edge[y][x][0] = tmp;
    }
    for (int y = 1; y <= N; y++)for (int x = 1, tmp; x <= M + 1; x++)
    {
        cin >> tmp;
        if (tmp == -1)    tmp = H;
        edge[y][x - 1][1] = tmp;
        edge[y][x][3] = tmp;
    }
}

void init()
{
    for (int x = 1; x <= M; x++)
    {
        pq.push({ 1,x,0,edge[1][x][0] });
        pq.push({ N, x, 2, edge[N][x][2] });
        chk[0][x] = chk[N + 1][x] = 1;
    }

    for (int y = 1; y <= N; y++)
    {
        pq.push({ y, 1, 3, edge[y][1][3] });
        pq.push({ y, M, 1, edge[y][M][1] });
        chk[y][0] = chk[y][M + 1] = 1;
    }
}

bool safe(int y, int x)
{
    return y >= 1 && x >= 1 && y <= N && x <= M;
}

void pqpush(int y, int x, int h, int p)
{
    if (!chk[y][x] && safe(y, x))  pq.push({ y,x,h,p });
}

void bfs()
{
    while (pq.size())
    {
        Data tmp = pq.top();
        int y = tmp.y;
        int x = tmp.x;
        int p = tmp.p;
        int h = tmp.h;  pq.pop();

        if (chk[y][x] == 1)    continue;
        chk[y][x] = 1;
        sum += h;

        pqpush(y - 1, x, 2, max(edge[y - 1][x][2],h));
        pqpush(y, x + 1, 3, max(edge[y][x + 1][3], h));
        pqpush(y + 1, x, 0, max(edge[y + 1][x][0], h));
        pqpush(y, x - 1, 1, max(edge[y][x - 1][1], h));
    }
}

int main()
{
    input();
    init();
    bfs();
    cout << sum;
}
