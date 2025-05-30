#include <iostream>
#include <cmath>
#include <stdio.h>
#include <vector>
using namespace std;

double x, y, r, x2, y2, r2;
int N;

double D(double x, double y, double x2, double y2) { return sqrt(pow(x - x2, 2) + pow(y - y2, 2)); }

int getIntersectPoint(double x, double y, double r, double x2, double y2, double r2)
{
	double d = D(x, y, x2, y2);

	if (d == 0 && r == r2)					return -1;
	if (abs(r2 - r) == d || r + r2 == d)	return 1;
	if (abs(r2 - r) < d && d < r + r2)		return 2;
	return 0;

}


int main()
{
	vector<int> v;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y >> r >> x2 >> y2 >> r2;
		v.push_back(getIntersectPoint(x, y, r, x2, y2, r2));
	}
	for (auto i = v.begin(); i != v.end(); i++)
	{
		cout << *i << endl;
	}

}