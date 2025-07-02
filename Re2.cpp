// PRINT NAME N TIMES

#include<iostream>
using namespace std;

void func(int i, int num){
    if(i>num){
        return;
    }
    else{
        cout<<"Raey"<<endl;
        func(i+1,num);
    }
}


int main(){
    int num;
    cin>>num;
    func(1,num);
    return 0;
}

// TC - O(n)
// SC - O(n)