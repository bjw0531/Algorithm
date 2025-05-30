#include <iostream>
#include <queue>
using namespace std;

int W, H;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int cnt = 0;
int cheesecnt = 0;;
int plate[105][105];
int check[105][105];
queue<pair<int, int>> Q;
queue<pair<int, int>> Q2;
vector<int> cheesememory;
bool Safe(int y, int x) { return y >= 1 && x >= 1 && y <= H && x <= W; }

void input()
{
    cin >> H >> W;
    for (int y = 1; y <= H; y++) for (int x = 1, value; x <= W; x++)
    {
        cin >> value;
        plate[y][x] = value;
        if (value == 1)  cheesecnt++;
    }
}

void pushQ(int y, int x)
{
    if (plate[y][x] == 0)
    {
        Q.push({ y, x });
        check[y][x] = 1;
    }

    if (plate[y][x] == 1)
    {
        Q2.push({ y, x });
        check[y][x] = 1;
    }
}



void bfs()
{
    while (cheesecnt)
    {
        cheesememory.push_back(cheesecnt);
        while (Q.size())
        {
            int y = Q.front().first,
                x = Q.front().second;   Q.pop();

            for (int i = 0; i < 4; i++)
            {
                int yy = y + dy[i],
                    xx = x + dx[i];
                if (Safe(yy, xx) && !check[yy][xx])   pushQ(yy, xx);
            }
        }

        while (Q2.size())
        {
            int y = Q2.front().first,
                x = Q2.front().second;  Q2.pop();

            check[y][x] = 1;
            plate[y][x] = 0;
            cheesecnt--;
            Q.push({ y, x });
        }
        cnt++;
    }
}

int main()
{
    input();
    pushQ(1, 1);
    bfs();
    cout << cnt << endl;
    cout << cheesememory.back() << endl;
}
