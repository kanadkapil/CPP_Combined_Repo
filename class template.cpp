//class template
#include <iostream>
using namespace std;

template <class T>
class abc{
	T a,b;
	public:
		abc(T x, T y){
			a=x;
			b=y;
		}
		T max(){
			return((a>b)?a:b);
		}
};

int main(){
abc<int> obj(20,10);
cout<<"Max int: "<<obj.max()<<endl;
abc<float> ob(2.03,1.58);
cout<<"Max float: "<<ob.max()<<endl;
abc<char> o('a','c');
cout<<"Max char: "<<o.max()<<endl;
	return 0;
}
