// PALINDROME OR NOT

#include<iostream>
using namespace std;

bool isPalindrome(string s,int i, int n){
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return isPalindrome(s,i+1,n);
}

int main(){
    string s;
    cin>>s;
    int n= s.size();
    isPalindrome(s,0,n);

    if(isPalindrome(s,0,n)) cout<<"A PALINDROME";
    else cout<<"NOT A PALINDROME";
    return 0;
}