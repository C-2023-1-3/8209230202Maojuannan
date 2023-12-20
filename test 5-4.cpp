#include<iostream>
class Student
{
public:
	int sco;
	int num;
	Student(int a,int b)
	{
		sco = a;
		num = b;
	}
};
int max(Student* m, int len)
{
	Student k = m[0];
	int o;
	for (int i = 1; i < len; i++)
	{
		if (k.sco > m[i].sco)
		{
			k = k;
		}
		else
		{
			k =m[i];
		}
	}
	o = k.num;
	return o;
}
int main()
{
	Student stu[5] = {Student(89,01),Student(90,02), Student(99,03), Student(88,04) ,Student(78,05) };
	Student* p;
	p = stu;
	std::cout<<max(p, 5);

	
	


	
	

	
}