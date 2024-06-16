#include <iostream>
using namespace std;

class base{
	public:
		virtual ~base(){
			cout<<"I am base destructor";
		}
};

class derive: public base{
	public:
		~derive(){
			cout<<"I am derived destructor"<<endl;
		}
};

int main(){
	base *p = new derive();
	delete p;
	return 0;
}
