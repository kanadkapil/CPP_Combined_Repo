#include <iostream>
using namespace std;
void TOH(int n, char src, char aux,char des){
	if(n>0){
		TOH(n-1,src,des,aux);
		cout<<"Disk: "<<src<<" to: "<<des<<endl;
		TOH(n-1,aux,src,des);
	}
}

int main(){
int n;
cin>>n;
TOH(n,'S','A','D');
	return 0;
}
