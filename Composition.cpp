#include <iostream>
using namespace std;

class engine{
	public:
		engine(){
			cout<<"I am engine"<<endl;
		}
		~engine(){
			cout<<"Engine destroyed"<<endl;
		}
};

class car{
	public:
		engine eng;
		car(){
			cout<<"I am Car"<<endl;
		}
		
		~car(){
			cout<<"Car destroyed"<<endl;
		}
};

int main(){
	car c;
	return 0;
}
