#include <iostream>
#include <string>
using namespace std;

int main(){
	string str="Ram ram Rammmm rammmbbbbb";
	cout<<str.find_first_of("Rap")<<endl;
	cout<<str.find_last_of("Rap");
	
	return 0;
}
