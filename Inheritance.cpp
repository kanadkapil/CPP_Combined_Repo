#include <iostream>
using namespace std;

class A{
	public:
		int x=100;
		void print(){
			cout<<"I am the parent class, oh oh oh"<<endl;
		}
		
};

class C{
	protected: 
	int age;
};

class D: public C{
	public:
		
void display(int s){
	age=s;
	cout<<s;
}

};

class B: public A{
	public:
		void show(){
			cout<<"I am the derived class, oh oh oh";
		}
};

int main(){
//	B obj;
	cout<<"Let's see the output: \n"<<endl;
//	obj.print();
//	obj.show();
D ob;
ob.display(900);

	return 0;
}
