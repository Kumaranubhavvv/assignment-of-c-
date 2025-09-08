//Write a program using a while loop to check whether a number is a palindrome.
// (Input: 121 → Output: Palindrome)

#include<iostream>
using namespace std;
int main(){
    int rev=0,ld,n,dup;
    cout<<"Enter the number:";
    cin>>n;
    dup=n;
    while(n>0){
        ld=n%10;
        rev=(rev*10)+ld;
        n/=10;
    }
    if(dup==rev) cout<<"Number is palindrome";
    else cout<<"Number is not palindrome";
    return 0;
}