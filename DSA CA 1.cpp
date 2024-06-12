#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	string k[n];
	for(i=0;i<n;i++){
		cin>>k[i];
	}
	int freq[n],check=-1;
	for(i=0;i<n;i++){
		int count = 1;
		for(j=i+1;j<n;j++){
			if (k[i]==k[j]){
			count ++;
			freq[j]=check;
		}
		}
		if (freq[i]!=check)
		freq[i]=count;
	}
	for(i=0;i<n;i++){
		if(freq[i]!=check){
			cout<<k[i]<<"                       "<<freq[i]<<endl;
		}
	}
	
	return 0;
}
