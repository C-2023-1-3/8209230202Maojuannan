#pragma once
#include<iostream>
int& maxn(int &m, int& n)
{ 
	int h,c, d;
	if (m > n)
	{
		c = m;
		d = n;
	}
	else {
		c = n;
		d = m;
	}
	while (d != 0)
	{
		h = c % d;
		c = d;
		d = h;
	}
	return c;
}
int& minn(int &m,int&n)
{
	int o = m;
	int p = n;
	while (o!=p)	
	{
		if (o> p)
		{
			p = n + p;
		}
		else {
			o = o + m;
		}
	}
	return o;
}