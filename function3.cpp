#include<iostream>
using namespace std;
int max(int num1,int num2);
int main()
{
	int val1,val2;
	
	cout<<"Enter 1st value";
	cin>>val1;
	
	cout<<"Enter 2nd value";
	cin>>val2;
	int ret;
	ret=max(val1,val2);
	cout<<"The greater of the two values is:"<<ret<<endl;
	return 0;
}
int max(int num1,int num2)
{
	int result;
	if(num1>num2)
	result=num1;
	else
	result=num2;
	return result;
}

