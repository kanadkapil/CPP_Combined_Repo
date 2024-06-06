#include <iostream>
using namespace std;
class ABC{
	const char *n;
	public:
ABC(){
	n=new char[10];
	n="Dynamo";
}		
void display(){
	cout<<n;
}
};

int main(){
//	ABC obj;
//obj.display();    //Or
	ABC *obj= new ABC[5];
	obj->display();
	
	return 0;
}
