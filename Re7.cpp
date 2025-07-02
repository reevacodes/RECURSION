// SUM OF N ELEMENTS - FUNCTIONAL WAY

#include<iostream>
using namespace std;

int func(int num){
    if(num==0) return 0;
    return num+func(num-1);
}

int main(){
    int num;
    cin>>num;

   cout<<func(num);
   return 0;
}