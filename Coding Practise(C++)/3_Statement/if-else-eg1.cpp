#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    if(num%2==1){
        cout<<"You entered odd number.";
    }
    else {
        cout<<"You entered even number.";
    }

    return 0;
}