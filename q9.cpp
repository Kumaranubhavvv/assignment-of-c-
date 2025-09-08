//Write a program to calculate the factorial of a number using a for loop.
// (Input: 5 → Output: 120)


#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1;
    cout<<"enter the number :";
    cin>>n;
    for(i=n;i>0;i--){
        fact*=i;
    }
    cout<<"Factorial of a number is :"<<fact;
    return 0;

}