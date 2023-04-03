#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()

{
	int num,i;
	srand(time(0));
	cout<<"REG ";
	for(int i=0;i<4;i++)
	cout<<(rand()%9)+1;

}
