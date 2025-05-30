#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<pair<int,int>> q;
int N;
int answer = 0;

void bfs()
{
    while(q.size())
    {
        int n = q.front().first,
            cnt = q.front().second; q.pop();
        if(n == 1)
        {
            answer = cnt;
            return;
        }

        if(n % 2 == 0)  q.push({n / 2, cnt+1});
        if(n % 3 == 0)  q.push({n / 3, cnt+1});
        q.push({n - 1, cnt+1});

    }
}

int main()
{
    cin >> N;
    q.push({N, 0});
    bfs();
    cout << answer;
}
