#include <iostream>
using namespace std;
int main(){
	string s1="12345";
	string s2("abcde");
	cout<<s1<<endl<<s2<<endl;
string s3= s1.insert(4,s2);
	cout<<s3<<endl;
	s1.insert(4,s2,1,1);
	cout<<s1;
	
	
	return 0;
}
