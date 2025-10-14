// addition of two numbers
// #include <iostream>
// using namespace std;
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


// int main(){
//   int a,b,c;//c is a helping variable
//   cout<<"Enter  two numbers "<<endl;
//   cin>>a>>b;
//   cout<<"Before swapping"<<endl;
//   cout<<", a = "<<a<<" ,b ="<<b<<endl;
//   cout<<"after swapping "<<endl;
//   c=a;
//   a=b;
//   b=c;
//   cout<<", a = "<<a<<", b = "<<b;
//   return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int n,a,b,sum;
//     cout<<"enter a four digit number ";
//     cin>>n;
    
//     a=n%10;
//     n=n/10;

//     b=n%10;
//     n=n/10;

//     // c=n%10;
//     // n=n/10;

//     sum=a+b+/*c*/+n;

//     cout<<"Your sum is "<<sum<<".";
//     return 0;

// }





//reverse the numbers
// #include <iostream>
// using namespace std;
// int main() {
//     int n, a, b, c, d, rev;
//     cout << "Enter a 4-digit number: ";
//     cin >> n;

//     a = n % 10;  // ones
//     n = n / 10;
//     b = n % 10;  // tens
//     n = n / 10;
//     c = n % 10;  // hundreds
//     n = n / 10;
//     d = n % 10;  // thousands

//     rev = a*1000 + b*100 + c*10 + d;  // use a,b,c,d in reverse order
//     cout << "Reverse order is " << rev;
//     return 0;
// }


//conditional operators(?:)

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter a number ";
//   cin>>n;

//   bool ok= ( n%2 == 0 && n % 5 == 0) ?  true : false ;
//   return 0;
// }