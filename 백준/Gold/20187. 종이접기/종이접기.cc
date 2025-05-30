#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int k, h, A[1000][1000];
int LR[4] = { 1, 0, 3, 2 }, UD[4] = { 2, 3, 0, 1 };
char D[1000];

void dfs(char* p, int x1, int x2, int y1, int y2)
{
    if (*p == 0)
    {
        A[y1][x1] = h;
        return;
    }
    switch (*p)
    {
    case 'D':
        dfs(p + 1, x1, x2, (y1 + y2 + 1) / 2, y2);
        for (int x = x1; x <= x2; x++) for (int s = y1, e = y2; s < e; s++, e--)
        {
            A[s][x] = UD[A[e][x]];
        }
        break;
    case 'U':
        dfs(p + 1, x1, x2, y1, (y1 + y2) / 2);
        for (int x = x1; x <= x2; x++) for (int s = y1, e = y2; s < e; s++, e--)
        {
            A[e][x] = UD[A[s][x]];
        }
        break;
    case 'R':
        dfs(p + 1, (x1 + x2 + 1) / 2, x2, y1, y2);
        for (int y = y1; y <= y2; y++) for (int s = x1, e = x2; s < e; s++, e--)
        {
            A[y][s] = LR[A[y][e]];
        }
        break;
    case 'L':
        dfs(p + 1, x1, (x1 + x2) / 2, y1, y2);
        for (int y = y1; y <= y2; y++) for (int s = x1, e = x2; s < e; s++, e--)
        {
            A[y][e] = LR[A[y][s]];
        }
        break;
    }
}

void input()
{
    cin >> k;
    for (int i = 0; i < 2 * k; i++)    cin >> D[i];
    cin >> h;
    dfs(D, 0, pow(2, k) - 1, 0, pow(2, k) - 1);
}

int main()
{
    input();
    for (int y = 0; y < pow(2, k); y++)
    {
        for (int x = 0; x < pow(2, k); x++) cout << A[y][x] << ' ';
        cout << endl;
    }
}
