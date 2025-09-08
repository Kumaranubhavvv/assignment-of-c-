//Generate a random number between 1 and 100.
// Keep asking the user to guess until they get it right, using a do-while loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,cnt=0,n2;
    do{
        cout<<"Guess a number between 1 to 100:";
        cin>>n1;
        n2=rand()%100+1;
        if(n1==n2) break;
        cout<<"Guess Number is"<<n2<<endl;
    }while(cnt!=1);
    return 0;
}