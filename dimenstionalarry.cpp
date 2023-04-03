#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

int number[10];
for(int i=0;1<10;i++)
{
	number[i]+10;
}
cout<<"Element"<<setw(13)<<"Value"<<endl;
for(int j=0;j<10;j++)
{
	cout<<setw(7)<<j<<setw(13)<<number[j]<<endl;
	
}
return 0;
}
