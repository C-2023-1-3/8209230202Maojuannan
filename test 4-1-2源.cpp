#include<iostream>
using namespace std;
void turn(double a[],int size)
{
	for (int m = 0; m < size-1; m++)
	{
		for (int n = 0; n < size-1- m; n++)
		{
			if (a[n] > a[n + 1])
			{
				int t;
				t = a[n];
				a[n] = a[n + 1];
				a[n + 1] = t;
			}
		}
	}
}
int main()
{
	double arr[10];
	cout << "������ʮ������ ";
	for (int i = 0; i < 10; i++)
	{
		double m;
		cin >> m;
		arr[i] = m;
	}
	turn(arr, 10);
	cout << "��ʮ����ð������֮��Ϊ�� ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i]<<" ";
	}

}