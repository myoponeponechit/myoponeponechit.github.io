#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any non-zero Number : ";
    cin>>num;
    if(num > 0){
        cout<<"The number is positive.";
    }
    else if(num<0){
        cout<<"The number is negative.";
    }
    
    return 0;
}