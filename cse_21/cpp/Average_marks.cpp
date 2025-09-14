#include<iostream>
using namespace std;
int main(){
    float phy,chem,maths;
    cout<<"Enter three marks:";
    cin>>phy>>chem>>maths;
    float average=(phy+chem+maths)/3;
    cout<<"Average"<<average;
}