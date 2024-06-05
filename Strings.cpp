#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1="12345";
	string s2("abcde");
	s2.insert(3,s1);
	cout<<"Insert: "<<s2<<endl;
	s2.replace(0,3,s1);
	cout<<"Replace: "<<s2<<endl;
	s2.append(s1,0,3);
	cout<<"Append: "<<s2<<endl;
	s1.erase(0,3);
	cout<<"Erase: "<<s1;
	
}
