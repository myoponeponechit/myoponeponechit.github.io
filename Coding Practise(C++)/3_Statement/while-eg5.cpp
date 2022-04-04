#include<iostream>
using namespace std;
int main(){
    int num = 1;//int num;default value = 0, so we assinged 1.
    cout<<"If you enter zero, program will terminate!\n\n";
    while(num != 0)
    {
        cout<<"Enter a number : ";
        cin>>num;
        if(num > 0)
            cout<<num<<" is positive number.";
        else if(num < 0)
            cout<<num<<" is negative number.";
        cout<<"\n";
    }
    return 0;
}