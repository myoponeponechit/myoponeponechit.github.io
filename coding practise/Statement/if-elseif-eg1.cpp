#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num % 5 == 0 && num % 3 == 0){
        cout<<num<<" is divisible by both 5 and 3.";
    }
    else if(num % 5 == 0){
            cout<<num<<" is divisible by only 5.";
    }
    else if(num % 3 == 0){
        cout<<num<<" is divisible by only 3.";
    }
    else{
        cout<<num<<" is not divisible by both 5 and 3.";
        }

    return 0;
}