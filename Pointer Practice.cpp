#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
    /*int n = 10;
    int *p;
    p = &n;
    cout <<*p<<endl; */

///for print array using pointer 
   /* int a[5] = {5,10, 15,20,25};
    int *p;
    p = a;
    for(int i = 0;i <=4 ; i++)
    cout<<a[i]<<endl;
    return 0; */

// array  inside heap
    int *p;
   // it for c p=(int *)malloc(5*sizeof(int));
   // for c++
   p = new int[5];
    p[0]=1; p[1] = 12; p[2]=  13; p[3] = 14; p[4] = 15;
    for(int i = 0;i <=4 ; i++)
    cout<<p[i]<<endl;

    return 0;
}