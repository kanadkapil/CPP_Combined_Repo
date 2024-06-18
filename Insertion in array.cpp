#include <iostream>
#include <iomanip>
using namespace std;
int main(){	
		int arr[50],loc,i,key,size,value;
	cout<<"Enter Array size: "<<endl;
	cin>>size;
	cout<<"Enter the elements: "<<endl;
	for(i=0;i<size;i++){
		cin>>arr[i];	
	}
	cout<<"Array before operation: "<<endl;
	for(i=0;i<size;i++){
		cout<<arr[i]<<endl;
		}
		cout<<endl;
	
cout<<"Enter index of number to be inserted: "<<endl;
cin>>key;
cout<<"Enter value to be inserted: "<<endl;
cin>>value;

//Insertion
for(i=size;i>=key;i--){
	arr[i+1]=arr[i];	
}
	arr[key]=value;
	size++;
cout<<"Array after insertion: "<<endl;
	for(i=0;i<size;i++){
		cout<<arr[i]<<"  ";
		}
		cout<<endl<<endl;
	
//Deletion
cout<<"Enter index of number to be deleted: "<<endl;
cin>>loc;
for(i=loc;i<size-1;i++)	{
arr[i]=arr[i+1];	
}
size--;
cout<<"Array after deletion: "<<endl;
	for(i=0;i<size;i++){
		cout<<setprecision(1)<<arr[i]<<"  ";
		}
		
	system("pause>0");
	
	return 0;
}
