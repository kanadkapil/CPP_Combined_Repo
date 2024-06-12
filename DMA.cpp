#include <iostream>
using namespace std;

int main(){
	int *arr, size, i;
	cout<<"How many array elements do you need?"<<endl;
	cin>>size;
	arr=new int[size]; 
	cout<<"Enter the array elemtents: "<<endl;
	for(i=0;i<size;i++){
		cin>>*(arr+i);
	}
	for(i=0;i<size;i++){
		cout<<*(arr+i)<<" ";
	}
	delete []arr;
	return 0;
}
