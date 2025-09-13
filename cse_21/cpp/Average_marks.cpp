#include<iostream>
using namespace std;
int main(){
    float Eng;

    float Math;

    float Phy;

    float chem;


    cout <<"Enter English marks = ";
    cin>>Eng;


    cout <<"Enter Maths marks = ";
    cin>>Math;


    cout <<"Enter Physics marks = ";
    cin>>Phy;


    cout <<"Enter Chemistry marks = ";
    cin>>chem;

    float avg = (Eng+Math+Phy+chem)/4;

    cout<<"Avg marks = "<<avg<<endl;

    return 0;
}