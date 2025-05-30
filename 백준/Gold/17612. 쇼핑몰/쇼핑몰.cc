#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define INF 987654321
using namespace std;

struct human
{
    unsigned long long id, goodcnt, out_time, used_counter;
}hu[100003];

struct counter
{
    unsigned long long id, totalwait;
    bool operator < (const counter& b) const {
        if(totalwait != b.totalwait)    return totalwait > b.totalwait;
        return id > b.id;
    }
};

queue<human> Q;
priority_queue<counter> PQ;
vector<human*> outv;
int N,k;

bool cmp(human* a, human* b) {
    if(a->out_time != b->out_time)    return a->out_time < b->out_time;
    return a->used_counter > b->used_counter;
}


int main()
{
    cin >> N >> k;
    // counter k개 만들기
    for(int i = 1; i <= k; i++) PQ.push({i,0});

    for(int i = 1; i <= N; i++)
    {
        cin >> hu[i].id >> hu[i].goodcnt;
    }

    for(int i = 1; i <= N; i++)
    {
        human *customer = &hu[i];
        counter ct = PQ.top();      PQ.pop();

        customer->used_counter = ct.id;
        ct.totalwait += customer->goodcnt;
        customer->out_time = ct.totalwait;
        outv.push_back(customer);
        PQ.push(ct);
    }

    sort(outv.begin(), outv.end(), cmp);

    /*
    for(auto i:outv)
    {
        printf("id:%d goodcnt:%d out_time:%d used:%d\n",i->id, i->goodcnt, i->out_time, i->used_counter);
    }
    */

    int cnt = 1;
    unsigned long long sum = 0;
    for(auto p : outv)
    {
        sum += p->id * cnt++;
    }

    cout << sum;


}
