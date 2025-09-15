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
#include<iostream>
using namespace std;
int main(){
    int n, sum =0;
    cout<<"Enter a number = ";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum += i;
    }//
        cout<< "sum from 1 to " << n <<" is "<< sum << endl ;
    return 0;
}