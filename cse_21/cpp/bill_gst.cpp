#include<iostream>
using namespace std;
int main(){
    float pen;
    float pncl;
    float ersr;

    cout<<"pen cost = ";
    cin>>pen;
    
    cout<<"pencil cost = ";
    cin>>pncl;

    cout<<"Eraser cost = ";
    cin>>ersr;

    float bill = (pen+pncl+ersr) * 0.18 + (pen+pncl+ersr) ;
    cout<<"Your total bill is = "<<bill<<endl;

    return 0;
}