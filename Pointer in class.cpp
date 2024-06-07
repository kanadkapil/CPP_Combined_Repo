#include <iostream>
using namespace std;

class Array{
	int *arr;
	int size;
	public:
	void get(int n){
		size =n;
		arr= new int[size];
		for(int i=0; i<size;i++){
		
		cin>>*(arr+i);
	}
	}	
	
	void mul(){
	int res=1;
	for(int i=0;i<size;i++){
	
	res*=*(arr+i);
}
	cout<<"The multiplication of these numbers is: "<<res;
	
	}
	
	
};

int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;

cin>>n;
Array obj;
obj.get(n);
obj.mul();	
	
	return 0;
}
