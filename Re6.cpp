// SUM OF N ELEMENTS - PARAMETERIZED WAY

#include<iostream>
using namespace std;

void func(int i, int sum){
    if(i<1){
    cout<<sum;
    return;
    }
    func(i-1,sum+i);
}

int main(){
    int num;
    cin>>num;
    func(num,0);
    return 0;
}