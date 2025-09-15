// addition of two numbers
#include <iostream>
using namespace std;
// int main(){
 //   int a,b,sum;
   // a = 10;
  //  b = 23;
   // sum = a + b;
  //  cout<<b<<"+"<<a<<"="<<sum;
   // return 0;
//}
// int main(){
//     int a,b, sum;
//     cout<<"enter a = ";
//     cin>>a;
//     cout<<"enter b = ";
//     cin>>b;

//     sum = a + b;
//     cout<<"sum = "<<sum;
//     return 0 ;
// }

// swapping two numbers


int main(){
  int a,b,c;//c is a helping variable
  cout<<"Enter  two numbers "<<endl;
  cin>>a>>b;
  cout<<"Before swapping"<<endl;
  cout<<", a = "<<a<<" ,b ="<<b<<endl;
  cout<<"after swapping "<<endl;
  c=a;
  a=b;
  b=c;
  cout<<", a = "<<a<<", b = "<<b;
  return 0;
}