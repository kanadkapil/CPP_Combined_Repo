#include <iostream>
using namespace std;

template<class T>

	class one{
		protected:
			T a;
	};
	
template <class T, class T1>
	class two: public one<T>{
		T1 b;
		public:
			void get(){
				cin>>one<T>::a;
				cin>>b;
			}
			void display(){
				cout<<"a: "<<one<T>::a<<endl;
				cout<<"b: "<<b<<endl;
			}
	};


int main(){
	two<int,float>ob1;
	two<float,int>ob2;
	cout<<"Input 1 (int and float)"<<endl;
	ob1.get();
	ob1.display();
	cout<<"Input 2 (float and int)"<<endl;
	ob2.get();
	ob2.display();
		return 0;
}
