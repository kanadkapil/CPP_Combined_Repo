#include <iostream>
#include <iomanip>
using namespace std;
class A{
	private: int x;
	public:
		void get(){
			cout<<"Enter the variable: "<<endl;
			cin>>x;
		}
		void table(){
			if (x<=20){
					for(int j=0;j<=20;j++){
						cout<<x<<" * "<<j<<" = "<<x*j<<endl;
					}
				}
			else
				cout<<"Invalid number";	
		}
};
int main(){
	A obj;
	obj.get();
	obj.table();
	int a=15;
	float b=9.56842;
	cout<<endl<<setbase(8)<<a;
	cout<<endl<<setw(5)<<a;
	cout<<endl<<setfill('*')<<setw(10)<<a;
	cout<<endl<<hex<<a;
	cout<<endl<<fixed<<setprecision(2)<<b;
	return 0;
}
