#include<iostream>
#include<iomanip>
using namespace std;
#include"mytemperature.h"
int main()
{
	cout << "������һ�����϶ȣ�";
	double cel;
	cin >> cel;
	cout << fixed << setprecision(2)<< "�����϶�=" << celsius_to_fah(cel) << "���϶�" << endl;
	cout << "������һ�����϶ȣ� ";
	double fah;
	cin >> fah;
	cout << "�û��϶�="<<  fahrenheit_to_cels(fah) << "���϶�" << endl;
	return 0;

}