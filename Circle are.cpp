#include <iostream>
using namespace std;
/*class circle{
	private: float r;
	public: float find_area(){
	r=3.562;
	return 3.14*r*r;	
	}	
};

class add{
	private: long double a,b;
	public: void sum(){
		cout<<"Enter two numbers: "<<endl;
		cin>>a>>b;
		cout<<"Their sum is: "<<endl<<a+b;		
	}	
};

int main(){
	//circle c1;
//cout<<"The area of the circle is: "<<endl<<c1.find_area();
	add a1;
	a1.sum();
	return 0;
}
*/
int main(){
//Create a code to find out if a number is prime or not
int x;
int found=1;
cout<<"Enter a number"<<endl;	
cin>>x;
for(int i=x-1;i>1;i--){
	if(x%i==0){
		found=0;
	}
	else{
		found=1;
	}
}	

if (found==1){
	cout<<"Prime Number";
}
else{
	cout<<"Not Prime Number";
}

//print natural numbers till 100
return 0;
}



