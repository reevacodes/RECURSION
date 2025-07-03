// REVERSE AN ARRAY - W/O 2 POINTER

#include<iostream>
using namespace std;

void func(int arr[],int i,int n){
    if(i>=n/2) return;

    swap(arr[i], arr[n-i-1]);
    return func(arr,i+1,n);
}

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    func(arr,0,num);

    // REVERSED ARRAY
    cout<<"Reversed array"<<endl;
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}