#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter your marks : ";
    cin>>mark;
    if(mark>=50){
        cout<<"You pass exam!";
    }else{
        cout<<"You fail exam!";
    }

    return 0;
}