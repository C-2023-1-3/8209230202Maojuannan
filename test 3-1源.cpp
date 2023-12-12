#include<iostream>
using namespace std;
#include"test 3-1.h"
int main()
{
	int m, n;
	cout << "请输入两个数： ";
	cin >> m >> n;
	cout << "这两个数的最大公约数是：";
	cout << maxn(m, n)<<endl;
	cout << "这两个数的最小公倍数是: ";
	cout << minn(m, n);
	return 0;
}