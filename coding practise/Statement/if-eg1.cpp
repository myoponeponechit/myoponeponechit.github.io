#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num>=0 && num<=9){
        cout<<"You entered one digit.";
    }
    cout<<"\n------Final Statement----------";

    return 0;
}