#include <iostream>
using namespace std;

void divide(int a, int b, int c){
	cout<<"The divide function"<<endl;
		if(c>a){
		throw(b);
	}
	else if((a-b)!=0){
		cout<<"The result: "<<c/(a-b);
	}
	else{
		throw(a-b);
	}
}

int main(){
	try{
		cout<<"The try block"<<endl;
		divide(10,5,30);
	}
	catch(...){
//	catch(int i){
		cout<<"Caught the exception. Change the value of a or b";
	}
	
	return 0;
}
