//Write a program using a for loop to find the sum of the first N natural numbers.
 //(Input: N = 5 → Output: 15)

 #include<iostream>
 using namespace std;
 int main(){
    int i=0,sum=0,n;
 cout<<"enter the number:"; 
 cin>>n;
 for(i=1;i<=n;i++){
    sum+=i;
 }
 cout<<"the sum is:"<<sum<<endl;
 return 0;
 }
