#include<iostream>
using namespace std;
class Time            
{
private:              
	int hour;
	int minute;
	int sec;
public:
	void C()
	{
		cin >> hour;      
		cin >> minute;
		cin >> sec;
		cout << hour << ": " <<minute << "£º" << sec << endl;
	}
};
int main()
{
	Time tl;           
	tl.C();
	return 0;
}