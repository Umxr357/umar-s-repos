// print no from 0 to 50


// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0;i<=50;i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;

// }


//print odd numbers in between 0 to 50(multiple methods)

// #include<iostream>
// using namespace std;
// int main(){
//       int n=50;
//     //for(int i =1;i<=50;i+=2){ //b
//     for(int i= 1;i<=n/*i<=50*/;i++){ //A
//     if(/*i%2!=0*/i%2==1){ //A
//         cout<<i<<" ";//A
//     }
//       //  cout<<i<<" ";//b
//     }
//     cout<<endl;
//     return 0;
// }



//printing sum from 1 to n


// #include<iostream>
// using namespace std;
// int main(){
//     int n, sum =0;
//     cout<<"Enter a number = ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         sum += i;
//     }//
//         cout<< "sum from 1 to " << n <<" is "<< sum << endl ;
//     return 0;
// }



//Print the squares of all numbers from 1 to 20.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=20,square;
//     for(int i=1;i<=n;i++){
//         square=i*i;
//     cout<<"Square of "<<i<<" is "<<square<<endl;
//     }
//     return 0;
// }


//Print the multiplication table of any number given by the user (up to 10).

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10,mul,n;
//     cout<<"Enter a no = ";
//     cin>>n;
//     for(int i=1;i<=a;i++){
//     mul=i*n;
//     cout<<mul<<endl;
//     }
//     return 0;
// }


//Print every 5th number from 5 to 100 (i.e., 5, 10, 15, ...).

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5;i<=100;i+=5){
//         cout<< i <<" , ";
//     }
//     return 0;
// }


//Show all numbers from 100 down to 1 in reverse order.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=100;i>=1;i--){
//         cout<< i <<" , ";
//     }
// }



// Count how many numbers between 1 and 50 are divisible by 3

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=50;i++){
//         if(i%3==0){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }



//prime no between 1 to n



// #include<iostream>
// using namespace std;
// int main(){
//     int n;



//print the square pattern using for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i= 1;i<=n;i++){
//         cout<<" **** "<<endl;
//     }
//     return 0;
// }


//sum of digits of a number using while loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"Enter a no : " ;
//     cin>>n;
//     while(n>0){
//         int last_dig= n%10;
//         digsum=
//         n = n/10;
//     }
//     cout<< endl;
//     return 0;
// }



//continue statement


// #include<iostream>
// using namespace std;
// int main(){
    
//     for(int i = 1 ; i<=10 ; i++ ){
//         if (i == 3){
//             continue;
//         }
//         cout<<i<<endl;
//     }
// }

//sum of digits of a 4 digit no

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c,n,sum;
//     cout<<"Enter a number = ";
//     cin>>n;

//     a=n%10;
//     n=n/10;

//     b=n%10;
//     n=n/10;

//     c=n%10;
//     n=n/10;

//     sum=a+b+c+n;

//     cout<<"Sum = "<<sum;
//     return 0;
//}

//reverse of a given 3 digit num


// #include<iostream>
// using namespace std;
// int main(){
//     int n,a,b,c,rev;
//     cout<<"Enter a four digit number = ";
//     cin>>n;

//     a=n%10;
//     n=n/10;
//     b=n%10;
//     n=n/10;
//     c=n%10;
//     n=n/10;
    
//     rev=a*1000+b*100+c*10+n;
//     cout<<rev;
//     return 0;

// }

//palindromic number or not#important to understand(reverse concept+sum of digits no.)
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a,b,c,rev,m;
//     cout<<"Enter a four digit number = ";
//      cin>>n;
//      m=n;
//      a=n%10;
//      n=n/10;
//      b=n%10;
//      n=n/10;
//      c=n%10;
//      n=n/10;
    
//      rev=a*1000+b*100+c*10+n;
//      (m==rev)?cout<<"Palindrome no ":cout<<"not a palindrome no.";//((a==n)&&(b==c))?cout<<"palindrome no.":cout<<"not a palindrome no.";

//      cout<<rev;
//      return 0;

// }


//armstrong no.

// #include<cmath>
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c,n,am,m;
//     cout<<"Enter an armstrong no.";
//     cin>>n;

//     m=n;
//     a=n%10;
//     n=n/10;
//     b=n%10;
//     n=n/10;
//     c=n%10;
//     n=n/10;

//     am=pow(a,4)+pow(b,4)+pow(c,4)+pow(n,4);

//     (m==am)?cout<<"Armstrong no.":cout<<"not an armstrong no.";
//     return 0;

// }


//nested conditional expression(greatest among 3)
// #include<iostream>
// using namespace std;
//  int main(){
//     int a,b,c;
//     cout<<"enter a ";
//     cin>>a;
//     cout<<"enter b ";
//     cin>>b;
//     cout<<"enter c ";
//     cin>>c;

//     (a>b)?((a>c)?cout<<"A largest":cout<<"C largest"):(b>c)?cout<<"B largest":cout<<"C largest";
//     return 0;
//  }


//leap year condition
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter a year ";
//     cin>>n;

//    //((n%400)||(n%4==0)&&(n%100!=0))
//    (n%100==0)?((n%400==0)?cout<<"leap year":cout<<"not a leap year"):((n%4==0)?cout<<"leap year":cout<<"not a leap year");
//    return 0;
// }