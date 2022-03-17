#include<iostream>
using namespace std;
int main(){
    int loanAtm,rate,months,interest,yourInterest;
    cout<<"Enter loan amount : ";
    cin>>loanAtm;
    cout<<"Enter rate : ";
    cin>>rate;
    cout<<"Enter number of month : ";
    cin>>months;
    interest=loanAtm*rate/100;
    yourInterest=months*interest;

    cout<<"\nMonthly Interest : "<<interest;
    cout<<"\nYour Interest : "<<yourInterest;

    return 0;
}