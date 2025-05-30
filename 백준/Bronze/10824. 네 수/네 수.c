#include <stdio.h>

int main()
{
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // b 자릿수 구하기
    long long b_len = 0;
    for(long long bb = b; bb != 0; bb /= 10)  b_len++;

    // d 자릿수 구하기
    long long d_len = 0;
    for(long long dd = d; dd != 0; dd /= 10)  d_len++;

    // a에 10^b_len 곱함
    for(long long i = 0; i < b_len; i++)  a *= 10;

    // c에 10^d_len 곱함
    for(long long i = 0; i < d_len; i++)  c *= 10;

    printf("%lld", a+b+c+d);

}
