#include<iostream>

//#define tithe()(tax()+tax()+tax())

using namespace std;
#define tax()("food")
#define tithe()(tax()+tax()+tax())//
int main()
{
	int salary;
	string z;
	salary=300000;
	z=tax()("food");
	cout<<z<<endl;
	//cout<<tithe();
}
