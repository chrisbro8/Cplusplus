#include<iostream>
using namespace std;
int main()
{
    int food;
    cout<<"Lists of food:";
    cout<<"Enter 1 for orange\n              Enter 2 for pineapple\n              Enter 3 for bread\n              Enter 4 for orange\n Answer:";
           cin>>food;
    switch(food){
    case 1:{
    cout<<"orange";
    break;
    }
    case 2:{
    cout<<"pineapple";
    break;
    }

     case 3:{
    cout<<"bread";
    break;
     }

     case 4:{
    cout<<"orange";
    break;
     }

    default:{
    cout<<"wrong input";
    }

    }
}
