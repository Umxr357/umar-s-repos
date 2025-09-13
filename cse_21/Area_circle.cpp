#include<iostream>
using namespace std;
int main() {

    const float PI = 3.14;
    float rad;
    cout<<" radius = ";
    cin>>rad;

    float area = (PI * rad * rad);
    cout<<"Area of the circle = "<<area<<endl;
    return 0;
}