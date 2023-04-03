#include <iostream>
using namespace std ;
int main ()
{
	int meal;
	int veg ;



cout << "which department do you belong to  ? \n   .(1) Medical \t .(2)Other\n "<<endl;
cin>> meal;

if (meal== 1){

	cout<<"are you a vegetarian ?\n  .(1)YES \t .(2)NO \n";
	cin >> veg ;
	
	

	  if(veg ==1) 
	{
		cout<<"you have succesfully selected the vegetarian meal plan for the Medical department\n";
}
	
		
   if (veg ==2 ){
	
			cout<<"you have succesfully selected the normal meal plan for the Medical department\n";
}
}




 if (meal== 2) {
	cout<<"are you a vegetarian ?\n  .(1)YES \t .(2)NO \n";
	cin >> veg;

	if(veg ==1) 
	{
		cout<<"you have succesfully selected the vegetarian meal plan for the \"Other\"  department\n";
	}
	 if(veg ==2 ){
	
			cout<<"you have succesfully selected the normal meal plan for the \"Other\" department\n";
	}
}
	else {
		//cout<<"Please select the required field \n";
	}
	


	
	if(meal==1 && veg==1){
		cout<<"student type:Medical student"<<endl; 
		cout<<"Meal condition:Vegeterian student"<<endl;
	}
		
		else if(meal==1 && veg==2){
		cout<<"student type:Medical student"<<endl;
		cout<<"Meal condition:normal student"<<endl;
		}
		else if(meal==2 && veg==1){
		cout<<"student type:Other student"<<endl;
		cout<<"Meal condition:Vegeterian student"<<endl;
	}
	
		else if(meal==2 && veg==2){
		cout<<"student type:other student"<<endl;
		cout<<"Meal condition:normal student"<<endl;
	//	system("pause>0");
		
	}
	


return 0 ;	
}

