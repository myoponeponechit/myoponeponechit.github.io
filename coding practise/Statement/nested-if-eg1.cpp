#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"\n------Divide 5 and 3------";
    cout<<"\n\nEnter a number : ";
    cin>>num;
    cout<<endl;
    if(num%5==0 || num%3==0){
        if(num%5==0 && num%3==0){
            cout<<num<<" is divisible by both.";
        }
        else{
             if(num%5==0){
            cout<<num<<" is only divisible by 5.";
            }
            else cout<<num<<" is only divisible by 3.";
        }
    }
    else cout<<num<<" is not divisible by both.";

    return 0;
}