#include<iostream>
using namespace std;
int t = 0;
	int mon(int m)
	{
	m = (m + 1) * 2;
	t++;
	if (t < 9)
	{
		mon(m);
	}
	else
	{
		return m;
	}

}
int main()
{
	cout << "��һ�����ժ��" << mon(1) << "������";
	return 0;
}