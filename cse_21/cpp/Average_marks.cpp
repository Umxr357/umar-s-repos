#include <iostream>
using namespace std;
int main(){
    float eng;
    float maths;
    float sci;

    cout<<"put eng marks:";
    cin>>eng;
    cout<<"put maths marks:";
    cin>>maths;
    cout<<"put sci marks:";
    cin>>sci;

    float avg = (eng+maths+sci)/3;
    cout<<"avg is:  "<<avg;
    return 0;
}