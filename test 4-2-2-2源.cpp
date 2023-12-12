#include<iostream>
#include<math.h>
using namespace std;
int parseHex(const char* const hexString)
{
	int size;
	int m=0;
	size = strlen(hexString);
	for (int n = 0; n < 2; n++)
	{
		int j;
		char k = hexString[n];
		j = k;
		if (j >= 65 &&j <= 71)
		{
			m = m + (j - 55) * pow(16, size - 1 - n);
		}
		else if(j>=48&&j<=57)
		{
			m = m + (j-48)  * pow(16, size- 1 - n);
		}
	
	}
	return m;

}
int main()
{
	char hexString[100];
	cout << "16进制：";
	cin >> hexString;
	cout << "10进制： "<<parseHex(hexString);


}