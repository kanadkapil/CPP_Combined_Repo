#include <iostream>
using namespace std;

class A{
	public:
		float div(float a, float b, float c){
			cout<<a*b*c<<endl;
			return 0.0;
		}
		void div(int a, int b){
			cout<<a*b<<endl;
		}
};

double sum(double a, double b){
	cout<<a*b<<endl;
	cout<<"Double function"<<endl;
	sum(a,b);
}

void sum(double a, int b){
	cout<<a+b<<endl;
	cout<<"int function"<<endl;

}

//void sum(double a, double b){
//	cout<<a*b<<endl;
//	cout<<"Double function"<<endl;
//}
//
//void sum(int a,int b){
//	cout<<a/b;
//}
int main(){
	A obj;
	sum(1.2,3.4);
	sum(1.3,2.4);
//	sum(9,3);
	obj.div(1.2,3.1,5.2);
	obj.div(5,2);
	return 0;
}
