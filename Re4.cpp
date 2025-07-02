// PRINT i N TIMES IN REVERSE ORDER

// #include<iostream>
// using namespace std;

// void func(int i,int num){
//     if(i>num) return;
//     func(i+1,num);
//     cout<<i<<" ";
// }

// int main(){
//     int num;
//     cin>>num;
//     func(1,num);
//     return 0;
// }


#include<iostream>
using namespace std;

void func(int i,int num){
    if(i<num) return;
    func(i-1,num);
    cout<<i<<" ";
}

int main(){
    int num;
    cin>>num;
    func(num,num);
    return 0;
}