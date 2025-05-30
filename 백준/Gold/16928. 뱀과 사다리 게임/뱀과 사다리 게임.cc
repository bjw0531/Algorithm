#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arr[110];
int check[110];
int N,M;
queue<pair<int,int>> Q;

void init()
{
    check[1] = 1;
    for(int i = 0; i < 105; i++)    arr[i] = i;
}

void input()
{
    init();
    cin >> N >> M;
    for(int i = 0,a,b; i < N+M; i++)
    {
        cin >> a >> b;
        arr[a] = b;
    }
}

int game()
{
    while(Q.size())
    {
        int idx = Q.front().first,
            cnt = Q.front().second;  Q.pop();

        idx = arr[idx];
        if(idx == 100)  return cnt;

        for(int i = 1; i <= 6; i++)
        {
            if(check[idx+i] == 0)
            {
                Q.push({idx+i, cnt+1});
                check[idx+i] = 1;
            }
        }

    }
}


int main()
{
    input();
    Q.push({1,0});
    cout << game();
}
