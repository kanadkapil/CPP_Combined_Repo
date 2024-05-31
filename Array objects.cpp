#include<iostream>
using namespace std;
class student{
	private: 
	string name;
	int rollno;
	public: 
	void getDetails();
	void display();
};
void student::getDetails(){
		cout<<"Enter the name:"<<endl;
		cin>>name;
		cout<<"Enter the roll number: "<<endl;
		cin>>rollno;
	}
	void student::display(){
		cout<<"Name: "<<name<<endl<<"Rollno: "<<rollno<<endl;
	}
int main(){
	int n;
	cout<<"How many students do you need?"<<endl;
	cin>>n;
	student ob[20];
	for(int i=0;i<n;i++)
	{
		ob[i].getDetails();
	}
	cout<<endl<<"Student details: "<<endl; 
		for(int i=0;i<n;i++)
	{
		ob[i].display();
	}
	return 0;
}
