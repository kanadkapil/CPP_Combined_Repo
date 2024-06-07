#include <iostream>
using namespace std;

class A{
	int x;
	public:
	void get(){
	cout<<"Enter the value to display"<<endl;
		cin>>x;
	
	}	
	
	void display(){
	cout<<endl<<"The number entered is: "<<x;
	
	}	
};

int main(){
A *ptr;
A obj;
ptr=&obj;
//Or
//A *ptr;
//ptr= new A;
ptr->get();
//Or
//(*ptr).get();
ptr->display();	
	
	return 0;
}
