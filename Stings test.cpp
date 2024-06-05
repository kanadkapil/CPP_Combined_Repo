#include <iostream>
using namespace std;

class person{
	public:
		string name;
		
};
int main(){
	int n;
	cout<<"Number: "<<endl;
	cin>>n;
	person ob[n];
	for(int i=0;i<=n;i++)
	getline(cin,ob[i].name);
	for(int i=0;i<=n;i++)
	cout<<ob[i].name<<endl;
	
	return 0;
}
