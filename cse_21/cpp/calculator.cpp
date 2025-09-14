//Calculator using switch statement and four arithmatic operators(+,-,*,/)
#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;

    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    cout<<"Enter op : ";
    cin>>op;

   switch(op){
    case '+' : cout << " a + b "<<a+b;
               break;
    case '-' : cout << " a - b "<<a-b;
               break;
    case '*' : cout << " a * b ="<<a*b;
               break;
    case '/' : cout << " a/b = "<<a/b;
               break;
    default  : cout << "invalid";         
   }
    return 0;
}