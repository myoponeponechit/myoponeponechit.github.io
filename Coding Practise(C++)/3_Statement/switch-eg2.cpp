#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter your grade : ";
    cin>>grade;

    switch(grade){
        case 'A':
            cout<<"Excellent";
            break;
        case 'B':
            cout<<"Credit";
            break;
        case 'C':
            cout<<"Well done";
            break;
        case 'D':
            cout<<"You pass";
            break;
        case 'E':
            cout<<"Better try again";
            break;
        default:
            cout<<"Invalid grade";
    }

    return 0;
}