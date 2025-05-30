#include <iostream>
#include <algorithm>
#include <queue>
#include <stdio.h>
#define INF 987654321
using namespace std;

struct Data
{
    int a,b,c;
};

int arr[4][100005];
int Amax, Bmax, Awant, Bwant, A = 0, B = 0, cnt = 0;
queue<Data> Q;
Data movewater(int a, int b, int c, int mode);
void Qpush(Data k);
int bfs();


int main()
{
    scanf("%d %d %d %d",&Amax, &Bmax, &Awant, &Bwant);
    Q.push({0,0,0});

    int result = bfs();
    cout << result;

}

int bfs()
{
    arr[0][0] = 1;
    while(Q.size())
    {
        int a = Q.front().a,
            b = Q.front().b,
            c = Q.front().c;    Q.pop();

        if(a == Awant && b == Bwant)    return c;

        if(a != 0)      Qpush({0,b,c+1});
        if(b != 0)      Qpush({a,0,c+1});
        if(a != Amax)   Qpush({Amax,b,c+1});
        if(b != Bmax)   Qpush({a,Bmax,c+1});
        Qpush(movewater(a,b,c+1,0));
        Qpush(movewater(a,b,c+1,1));
    }
    return -1;
}

Data movewater(int a, int b, int c, int mode)
{
    if(mode == 0)
    {
        int sub = (a + b) - Amax;
        if(sub > 0) a = Amax, b = sub;
        if(sub <= 0) a = a + b, b = 0;
    }
    else if(mode == 1)
    {
        int sub = (a + b) - Bmax;
        if(sub > 0) b = Bmax, a = sub;
        if(sub <= 0) b = a + b, a = 0;
    }
    return {a,b,c};
}

void Qpush(Data k)
{
    int a = k.a,
        b = k.b,
        c = k.c,
        x,y;

         if(a == 0)     y = 0, x = b;
    else if(b == 0)     y = 1, x = a;
    else if(a == Amax)  y = 2, x = b;
    else if(b == Bmax)  y = 3, x = a;

    if(arr[y][x] == 0)
    {
        arr[y][x] = 1;
        Q.push({a,b,c});
    }
}
