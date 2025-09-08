//Write a program using a while loop to reverse the digits of a given number.
 //(Input: 1234 → Output: 4321)
#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }
    cout<<"rev number:"<<rev<<endl;
    return 0;
}