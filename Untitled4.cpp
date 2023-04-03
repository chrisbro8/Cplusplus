#include<iostream>
using namespace std;
int sum(int x,int y);
int main()
{
	int val1,val2,mas;
	val1=20;
	val2=10;
	mas=sum(val1,val2);
	cout<<mas;
}
int sum(int x,int y)
{
	int add;
	//int x,y;
	add=x+y;
	return add;
}
