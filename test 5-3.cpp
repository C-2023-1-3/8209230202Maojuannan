#include<iostream>
class square
{
private:
	double len;
	double wid;
	double hei;
public:
	double squ()
	{
		double V;
		V = len * wid * hei;
		return V;
	}
	void Cin()
	{
		std::cout << "��ֱ����볤�����ĳ������ߣ�";
		std::cin >> len >> wid >> hei;
	}
};
int main()
{
	square v1,v2,v3;
	v1.Cin();
	v2.Cin();
	v3.Cin();
	std::cout<<"��һ��������������ǣ�"<< v1.squ()<< std::endl;
	std::cout<<"�ڶ���������������ǣ�"<< v2.squ()<< std::endl;
	std::cout<<"������������������ǣ�"<< v3.squ()<< std::endl;

}