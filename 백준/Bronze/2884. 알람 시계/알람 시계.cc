#include <iostream>
using namespace std;

int H,M;
int time;
int hour;

int main()
{
    cin >> H >> M;
    time = (H+24)*60 + M;
    time -= 45;
    cout << (time / 60) % 24 << ' ' << time % 60;
}
