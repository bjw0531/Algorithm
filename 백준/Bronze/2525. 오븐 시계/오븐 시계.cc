#include <iostream>
using namespace std;

int H,M,C;
int time;

int main()
{
    cin >> H >> M >> C;
    time = H*60 + M;
    time += C;
    cout << (time / 60) % 24 << ' ' << time % 60;
}
