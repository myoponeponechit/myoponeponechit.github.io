#include<iostream>
using namespace std;
int main(){
    int num = -1;
    cout<<"If you enter zero, program will terminate!\n\n";
    for(int i = 0;num != 0;i++){
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