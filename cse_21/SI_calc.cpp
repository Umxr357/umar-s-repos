#include<iostream>
using namespace std;
int main(){
    float prin;
    float rate;
    float time;

    cout<<" principal amount = ";
    cin>>prin;

    cout<<"Rate of interest = ";
    cin>>rate;

    cout<<"Number of years = ";
    cin>>time;

    float SI = (prin * rate * time)/100;
    cout<<"SI = "<<SI<<endl;

    return 0;
}