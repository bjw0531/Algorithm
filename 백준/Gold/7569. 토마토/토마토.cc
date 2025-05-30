#include <iostream>
#include <set>
#include <vector>
#include <queue>
using namespace std;

struct data {
    int z, y, x;
};

int M, N, H;
int grid[150][150][150];
queue<struct data> Q;
void bfs();
int day, cnt;
bool safe(int z, int y, int x);
void print();

int main()
{
    cin >> M >> N >> H;

    for (int z = 1; z <= H; z++)
    {
        for (int y = 1; y <= N; y++)
        {
            for (int x = 1, tmp; x <= M; x++)
            {
                scanf("%d", &tmp);
                grid[z][y][x] = tmp;
                if (tmp == 1)  Q.push({ z,y,x });
                if (tmp == 0)  cnt++;
            }
        }
    }

    Q.push({ -1,-1,-1 });
    bfs();

    if (cnt) cout << -1;
    else    cout << day;
    return 0;
}

void bfs()
{
    int directs[6][3] = { {0,0,1},{0,0,-1},{0,1,0},{0,-1,0},{1,0,0},{-1,0,0} };

    while (Q.size())
    {
        int z = Q.front().z,
            y = Q.front().y,
            x = Q.front().x;
        Q.pop();

        if (z == -1)
        {
            if (Q.size() == 0) return;
            day++;
            //print();
            Q.push({ -1,-1,-1 });
            continue;
        }

        for (int i = 0, zz, yy, xx; i < 6; i++)
        {
            zz = z + directs[i][0];
            yy = y + directs[i][1];
            xx = x + directs[i][2];

            if (grid[zz][yy][xx] == 0 && safe(zz, yy, xx))
            {
                grid[zz][yy][xx] = 1;
                cnt--;
                Q.push({ zz,yy,xx });
            }
        }


    }
}

void print()
{
    cout << endl;
    for (int z = 1; z <= H; z++)
    {
        for (int y = 1; y <= N; y++)
        {
            for (int x = 1; x <= M; x++)
            {
                printf("%d ", grid[z][y][x]);
            }
            cout << endl;
        }
    }
    cout << endl;
}

bool safe(int z, int y, int x)
{
    return z <= H && z >= 1 && x <= M && x >= 1 && y <= N && y >= 1;
}

