//print no from 0 to 50


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