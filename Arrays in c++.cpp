#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements you need: "<<endl;
	cin>>n;
	int arr[n],i;
	cout<<"Enter the array elements you need: "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Element's index"<<setw(10)<<"Element"<<endl;
	for(i=0;i<n;i++){
		cout<<setw(9)<<i<<setw(12)<<arr[i]<<endl;
	}
	
	
	return 0;
}
