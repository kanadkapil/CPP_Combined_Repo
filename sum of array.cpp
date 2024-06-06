#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 100
int main()
{
    int arr[MAX], sum = 0;
    int count;
    cin>>count;
    for(int i=0;i<=count;i++){
        arr[i]=i;
        sum=sum+i;
    }
    cout<<"The sum of array is "<<sum<<endl;
    return 0;
}