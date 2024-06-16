#include <iostream>
using namespace std;
struct patient{
	int id, age, gender;	
}pat[50];

void gender(int n){
	int i, male=0, female=0;
	for(i=0;i<n;i++){
		if (pat[i].gender==1)
		male++;
		else if (pat[i].gender==2)
		female++;
	}
	cout<<male<<"\n"<<female<<endl;
}
void age(int n){
	int i,count=0;
	for(i=0;i<n;i++){
		if(pat[i].age>40)
		count++;
	}
	cout<<count;
}
int main(){
	int i,n;//male=0,female=0,count=0;
	cout<<"How many patients do you need?"<<endl;
	cin>>n;
	cout<<"Enter the info: "<<endl;
	for(i=0;i<n;i++){
		cin>>pat[i].id>>pat[i].gender>>pat[i].age;	
	}
	cout<<"Your info: ";
	for(i=0;i<n;i++){
		cout<<"\n"<<pat[i].id<<endl<<pat[i].gender<<endl<<pat[i].age<<endl;
	}	
	gender(n);
	age(n);
/*	for(i=0;i<n;i++){
		if (pat[i].gender==1)
		male++;
		else if (pat[i].gender==2)
		female++;
	}
	cout<<male<<"\n"<<female<<endl;
	for(i=0;i<n;i++){
		if(pat[i].age>40)
		count++;
	}
	cout<<count;
	*/
	return 0;
}
