// REVERSE AN ARRAY
#include<iostream>
using namespace std;

void func(int arr[],int l, int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    return func(arr,l+1,r-1);
}

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    func(arr,0,num-1);

    cout << "Reversed array: ";
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
return 0;
}