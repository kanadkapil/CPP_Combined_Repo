#include <iostream>
using namespace std;

class A{
	public: 
	void show(){
	cout<<"The parent class.";
}
};

//class B: public A{
//};
//
//
//class C: public A{
//};

 class B: virtual public A{       //Virtual base class
};


class C: virtual public A{
};

class D: public B, public C{
};

int main(){
	D obj;
	obj.show();  //Vitual base class
//	obj.B::show();    //Scope resolution for multiple inheritance
	return 0;
}
