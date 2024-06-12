//BINARY SEARCH
//A. SORTING--BUBBLE SORT
//B. SEARCHING DONE BY FINDING MID POINTS OR MIDDLE ELEMENT
#include<iostream>
using namespace std;
int binSearch(int [],int,int);
void sortArray(int [],int);
int main()
{
int len,i,arr[50],num,pos=-1;
cout<<"Enter the length of an array";
cin>>len;
cout<< "Enter "<<len<<" array elements:";
for(i=0;i<len;i++)
{
cin>>arr[i];
}
//sorting-function-sortArray
sortArray(arr,len);
cout<<"Array after sorting";
for(i=0;i<len;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl<<"Enter element to be searced";
cin>>num;
pos=binSearch(arr,num,len);
if(pos==-1)
{
cout<<"Element not in the list";
}
else
{
cout<<num<<" is present at "<<pos<<" in the list";
cout<<endl;
return 0;
}
}
void sortArray(int arr[],int len)
{
int i,j,temp;
for(i=0;i<len;i++)
{
for(j=0;j<len-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;

}
}
}
}
int binSearch(int arr[],int num,int len)
{
int first,last,middle;
first=0;
last=(len-1);
middle=(first+last)/2;
while(first<=last)
{
if(arr[middle]<num)
first=middle+1;
else if(arr[middle]==num)
return (middle+1);
else
last=middle-1;
middle=(first+last)/2;


}
return -1;
}
