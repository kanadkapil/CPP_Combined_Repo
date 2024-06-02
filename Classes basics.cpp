#include <iostream>
using namespace std;
class opr{
	private: float n1,n2;
	public:
		void getValue();
		void addValue();
		void mulValue();
		void divValue();
		void subValue();
		void modValue();
	
};

	void opr::getValue(){
			cout<<"Enter the values: "<<endl;
			cin>>n1>>n2;
		}
	void opr::addValue(){
			cout<<"Their sum is: "<<n1+n2<<endl;			
		}
	void opr::mulValue(){
			cout<<"Their multiplication is: "<<n1*n2<<endl;
		}
	void opr::divValue(){
		cout<<"Their Division is: "<<n1/n2<<endl;
	}
	void opr::subValue(){
		cout<<"Their subtraction is: "<<n1-n2<<endl;
	}
	/*
	void opr::modValue(){
		cout<<"Their modulo is: "<<n1%n2;
	}*/
int main(){
	opr ob;
	
	int x=5;

	
	cout<<"**************************Smart Calculator*************************"<<endl;
	cout<<"Choose arithmetic operation to perform \n 1. Addition \n 2. Multiplication \n 3. Division \n 4. Subtraction \n 5. Exit\n";
	cin>>x; 

	switch(x){
	case 1:
	ob.getValue();
	ob.addValue();
	break;
	case 2:
	ob.getValue();
	ob.mulValue();
	break;
	case 3:
    ob.getValue();
	ob.divValue();
	break;
	case 4:
	ob.getValue();
	ob.subValue();
	break;
	default:
		cout<<"Enter valid operation";
		break;
}

	//ob.modValue();
//	while(x<6);
	return 0;
}
