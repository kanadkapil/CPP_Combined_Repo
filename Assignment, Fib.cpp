#include <iostream>
using namespace std;
//Print Fibonacci series
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
/*
//print natural numbers till 100

for(int i=0;i<101;i++){
	cout<<i<<endl;
}
*/
return 0;
}
