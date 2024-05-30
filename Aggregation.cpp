#include <iostream>
using namespace std;

class employee{        //Component class
	public:
		employee(){
			cout<<"I am employee(component class)"<<endl;
		}
		~employee(){
		cout<<"Employee class destoyed"<<endl;
		}
};

class company{        //aggregate class
	public:
		employee *emp;           //pointer to object of component class
		company(employee *emp){
			cout<<"I am company(aggregate class)"<<endl;
		}
		~company(){
		cout<<"Company class destoyed"<<endl;
		}
};


int main(){
	employee *obe= new employee;
	company obj(obe);
	return 0;
}
