#include <iostream>
using namespace std;
struct employee{
char name[50];
	//string name;
	int age;
	float salary;	
} emp1[50];
int main(){
	int i,n;
	cout<<"How many employees do you need?"<<endl;
	cin>>n;
for(i=0;i<n;i++){
cout<<"Enter the name of the employee "<<i+1<<endl;
cin.get(emp1[i].name,50);
//cin>>emp1[i].name; //will generate an error
cout<<"Enter the age of the employee "<<i+1<<endl;
cin>>emp1[i].age;
cout<<"Enter the employee salary "<<i+1<<endl;
cin>>emp1[i].salary;
}
cout<<"Employee Data: "<<endl;
for(i=0;i<n;i++){
cout<<"Name of employee "<<i+1<<" is: "<<emp1[i].name<<endl;
cout<<"Age of employee "<<i+1<<" is: "<<emp1[i].age<<endl;
cout<<"Salary of employee "<<i+1<<" is: "<<emp1[i].salary<<endl;
}
system("pause>0");
return 0;	
}
