//Initializer list
#include <iostream>
using namespace std;

class fract{
	int ca,cb;
	public:
		fract(int n,int k): ca(n), cb(k)
		{
		}
		void show(){
			cout<<ca<<" "<<cb;
		}
};
int  main(){
	fract ob(5,6);
	ob.show();
	return 0;
}
