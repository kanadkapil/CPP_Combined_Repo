//INSERTION SORT
#include<iostream>
using namespace std;
void insertionSort(int a[],int tot);//function decleration
int main()
{
int i,tot,a[50];
cout<<"Enter the size of an array";
cin>>tot;
cout<<"Enter array elements:";
for(i=0;i<tot;i++)
{
cin>>a[i];
}
insertionSort(a,tot);//function calling
cout<<"Array after sorting: "<<endl;
for(i=0;i<tot;i++)
{
cout<<a[i]<<" ";
}

return 0;
}
void insertionSort(int a[],int tot)
{
int i,j,ele;
for(i=0;i<tot;i++)
{
ele=a[i];
j=i-1;
while((ele<a[j])&&j>=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=ele;
}
}


