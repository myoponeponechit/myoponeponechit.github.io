#include<iostream>
using namespace std;
int main(){
    int time;
    cout<<"Enter time : ";
    cin>>time;

    string output = (time < 10) ? "Good Morning" : ((time < 20) ? "Good Day" : "Good Evening") ; // nested ternary operation

    cout<<output;

    return 0;
}