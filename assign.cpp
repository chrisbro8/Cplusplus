#include<iostream>
using namespace std;
int area(int length,int breadth);
int length,breadth,a;
int main()
{

     cout<<"Length: ";
     cin>>length;
      cout<<"Breadth: ";
       cin>>breadth;
      area(length, breadth);
      cout <<"Area of rectangle of length:" <<length<<" and  breadth:"<<breadth <<"="<<a;


}
int area(int length,int breadth)
{

a=length*breadth;
return a;
}
