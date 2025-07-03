#include<iostream>
using namespace std;

int func(int num){
    if(num<=1) return num;
    int last=func(num-1);
    int secLast=func(num-2);
    return (last+secLast);
}

int main(){
    int num;
    cin>>num;

    cout<<func(num);
    return 0;
}