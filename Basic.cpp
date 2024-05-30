#include <iostream>
using namespace std;
/*
class student{
	private: int x, y;
	public: void get(){
	cout<<"Please enter two integers:"<<endl;
	cin>>x>>y;
}
	void show(){
	cout<<"The numbers are: "<<"\n"<<x<<"\n"<<y;
}
};

int main(){
student students;
students.get();
students.show();

return 0;
}
*/
class big{
	private: float x,y;
	public:
	 void show();
//		cout<<"Hello World";
	
};
void big::show(){
	cout<<"This is the declared function."<<endl;
	cout<<"Enter some float values"<<endl;
	cin>>x>>y;
	cout<<"Their sum is: "<<endl<<x+y<<endl;
}

int main(){
big ob;
ob.show();

return 0;
}






