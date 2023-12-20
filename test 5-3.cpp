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
		std::cout << "请分别输入长方柱的长、宽、高：";
		std::cin >> len >> wid >> hei;
	}
};
int main()
{
	square v1,v2,v3;
	v1.Cin();
	v2.Cin();
	v3.Cin();
	std::cout<<"第一个长方柱的体积是："<< v1.squ()<< std::endl;
	std::cout<<"第二个长方柱的体积是："<< v2.squ()<< std::endl;
	std::cout<<"第三个长方柱的体积是："<< v3.squ()<< std::endl;

}