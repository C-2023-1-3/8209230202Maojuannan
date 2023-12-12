#include <iostream>
using namespace std;
void tu( int  * s, int* size)
{
	int len = *size;
	for (int m = 0; m < len -1; m++)
	{
		for (int n = 0; n < len - 1 - m; n++)
		{
			if (s[n] > s[n+1])
			{
				int tem;
				tem = s[n];
				s[n] = s[n+ 1];
				s[n + 1] = tem;

			}
		}
	}
}
int main()
{
	int size;
	cout << "请输入数组长度： ";
	cin >> size;
	int* list = new int[size];
	cout << "请输入数组元素： ";
	for (int i = 0; i < size; i++)
	{
		int m;
		cin >> m;
		list[i] = m;
	}
	tu(list, &size);
	for (int j = 0; j < size; j++)
	{
		cout << list[j] << "  ";
	}
	delete[]list;

}
