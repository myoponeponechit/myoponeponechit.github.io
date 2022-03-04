#include<iostream>
using namespace std;
int main(){

    int a=7,b=2;

    cout<<"a="<<a;
    cout<<"\nb="<<b;

    a+=b;// a = a + b = 7 + 2 = 9
    cout<<"\nAfter a+=b:,a="<<a;

    b%=2;// b = b % 2 = 2 % 2 = 0
    cout<<"\nAfter b%=2,b="<<b;

    return 0;
}