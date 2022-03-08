#include<iostream>
using namespace std;
int main(){
    int enterDays,years,months,days;
    cout<<"Enter number of days : ";
    cin>>enterDays;
    years=enterDays/365;
    months=(enterDays%365)/30;
    days=(enterDays%365)%30;
    cout<<"Years : "<<years;
    cout<<"\nMonths : "<<months;
    cout<<"\nDays : "<<days;
    return 0;
}