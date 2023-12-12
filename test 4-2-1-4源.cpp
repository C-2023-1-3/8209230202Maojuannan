#include<iostream>
using namespace std;
int* f()
{
	int list[] = { 1,2,3,4 };

	int* Dolist = new int[4] {1, 2, 3, 4};
	return  Dolist;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] f();
}