#include"elevator.h"
int time1(int d, int b, int t)
{
	if (d < b)
		t+= b - d;
	else
		t+= d - b;
	return t;
}
int time2(int c, int b, int t)
{
	if (b > c)
		t += b - c;
	else
		t+= c - b;
	return t;
}
