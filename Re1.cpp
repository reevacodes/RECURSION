// RECURSION - When the function keeps calling itself until the specific condition is met.
// STACK OVERFLOW - when there are many awaited(yet to be completed) functions in the stack so that stack space gets filled up and recursion stops working.
// BASE CONDITION - when there is a condition which tells the recursive function to stop now.



#include<iostream>
using namespace std;

int count=0;

void func(){
    if (count == 3){
    return;
    }
    else{
        cout << count;
        count++;
        func();
    }
}

int main(){

    func();

    return 0;
}