#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int course,unit[course];
    int x;
    string title[course],code[course],lect[course];
	string name,degree,address,sex,hostel;
	cout<<"what is your name:";
	getline(cin,name);
	cout<<"what is your address:";
	getline(cin,address);
	cout<<"what is your degree:";
	getline(cin,degree);
                                                                                                                                        cout<<"\t\t\t\t\t\tSex type 'm'or 'f':";cin>>sex;

                                                                                                                                        cout<<"\t\t\t\t\t\tEnter hostel:"; cin>>hostel;
                                                                                                                      

    cout<<"how many courses  are you doing:";
    cin>>course;
    while(x<=course)
    {
    	cout<<"Enter courses title:";
    	getline(cin,title[x]);
    	cout<<"Enter cosc code:";
    	getline(cin,code[x]);
    	cout<<"Enter lecturer name:";
    	getline(cin,lect[x]);
    	cout<<"Enter units:";
    	cin>>unit[x];
    	cout<<endl;


	}


	cout<<"Name:"<<name;
    cout<<"Address:"<<address;                                        cout<<"\t\t\t\t\t\tSex:"<<sex;
    cout<<"Degree:"<<degree;                                          cout<<"\t\t\t\t\t\tHostel:"<<hostel<<endl;
    cout<<endl;
    cout<<endl;
	cout<<"Selected courses";


	cout<<"i/t/t";  cout<<"Title\t\t";     cout<<"cosc code\t\t";     cout<<"\t\tlecturer name";     cout<<"\t\tSubject unit"<<endl;
	 for(int j=0;j<=course;j++)
    {
     cout<<"\t\t";  cout<<"titlej]\t\t";   cout<<"code[j]\t\t";  cout<<"\t\tlect[j]";           cout<<"\t\tunit[j]"<<endl;

	}
return 0;










}

