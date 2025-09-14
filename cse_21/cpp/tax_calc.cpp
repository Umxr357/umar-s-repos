#include<iostream>
using namespace std;
int main(){
    float income,tax;
    cout<<"Enter your income: ";
    cin>>income;

    if(income<=500000){
        cout<<"none";
    }else if(income<1000000){
        tax=income*0.2;
        cout<<"your tax is "<<tax;
    }else{
        tax=income*0.3;
        cout<<"your tax is "<<tax;
    }

    return 0;
}