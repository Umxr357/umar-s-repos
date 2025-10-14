#include<iostream>
using namespace std;
int sum(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
int main(){
   int num1,num2,result;
   cout<<"Enter two no.";
   cin>>num1>>num2;
   result=sum(num1,num2);    
   cout<<result;
}