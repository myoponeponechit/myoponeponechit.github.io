#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"If you enter zero, program will terminate!\n\n";
    do
    {
        cout<<"Enter a number : ";
        cin>>num;
        if(num > 0){
            cout<<num<<" is positive number.";
        }
        else if(num < 0)
        {
            cout<<num<<" is negative number.";
        }
        cout<<"\n";
    }
    while(num != 0);

    return 0;
}