#include<iostream>
using namespace std;
int main(){
    int num;
    int sum = 0;
    cout<<"Enter any number : ";
    cin>>num;
    cout<<"Sum of digits of "<<num<<" : ";
    while(num > 0){
       sum += num % 10;
       num = num / 10;
    }
    cout<<sum;
    return 0;
}