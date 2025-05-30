#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int x,y,w,h;
priority_queue<int, vector<int>, greater<int>> Q;

int main()
{
    cin >> x >> y >> w >> h;

    Q.push(x);
    Q.push(y);
    Q.push(h-y);
    Q.push(w-x);

    cout << Q.top();

}
