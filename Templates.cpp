//Function template
#include <iostream>
using namespace std;

template <typename T>   //According to the data tyoe you pass, it willperform the same function. It is equivalent to the codes below.
T myMax(T x, T y){
	return (x>y)? x: y;
}

//
//int myMax(int x, int y){
//		return (x>y)? x: y;
//}
//
//char myMax(char x, char y){
//		return (x>y)? x: y;
//}

int main(){
	cout<<myMax<int>(3,7)<<endl;
		cout<<myMax<char>('g','c')<<endl;
	return 0;
}
