// PRINT i N TIMES W/O i+1
// BACKTRACKING

#include<iostream>
using namespace std;

void func(int i,int num){
    if(i<1) return;
    func(i-1,num);
    cout<<i<<endl;
}

int main(){
    int num;
    cin>>num;
    func(num,num);
    return 0;
}