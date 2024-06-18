// You are using GCC
#include <iostream>
using namespace std;

void heapify(int arr[],int n, int i){
    int smallest=i;
    int left =2*i+1;
    int right =2*i+2;
    
    if(left<n && arr[left] > arr[smallest])
    smallest=left;
    if(right<n && arr[right] > arr[smallest])
    smallest=left;
    
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}

void heapSort(int arr[], int n){
 for(int i=n/2-1;i>=0;i--){
     heapify(arr,n,i);
 }   
 for(int i=n-1;i>=0;i--){
     swap(arr[0],arr[i]);
     heapify(arr,i,0);
 }   
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,i, arr[50];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size = n;
   // cout<<size;
    print(arr,size);
    heapSort(arr,size);
    cout<<"After Heap sort: "<<endl;
    print(arr,size);
    return 0;
}