#include<iostream>
#include<vector>
using namespace std;

void func(int idx,vector<int>&ds ,int arr[],int size){
    if(idx>=size) {
        for(int i=0;i<ds.size();i++){
        cout<<ds[i]<<" ";
        }
        cout<<endl;
    return;
    }
    ds.push_back(arr[idx]);
    func(idx+1,ds,arr,size);
    ds.pop_back();
    func(idx+1,ds,arr,size);
}

int main(){
    int arr[] = {3,1,2};
    int size=3;
    vector<int>ds;
    func(0,ds,arr,size);
}