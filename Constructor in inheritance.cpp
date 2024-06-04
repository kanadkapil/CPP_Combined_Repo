#include <iostream>
using namespace std;

class A{
	public:
	 A(){
		cout<<"1 \n1";
	}
	 ~A(){
		cout<<"2 \n1";
	}
};

class B: public A{
	public:
	 B(){
		cout<<"3 \n1";
	}
	 ~B(){
		cout<<"4 \n1";
	}
};

int main(){
	B obj;
	return 0;
}
