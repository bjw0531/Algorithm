#include <stdio.h>

long long f(int k)
{
	if (k == 0)	return 1;
	return f(k - 1) * k;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld", f(n));
}