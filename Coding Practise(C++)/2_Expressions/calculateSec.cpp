#include<iostream>
using namespace std;
int main(){
    int hr,min,sec,toltalSec;
    cout<<"Enter total seconds : ";
    cin>>toltalSec;
    hr=toltalSec/3600;
    min=(toltalSec%3600)/60;
    sec=(toltalSec%3600)%60;
    cout<<"Hour : "<<hr;
    cout<<"\nMinutes : "<<min;
    cout<<"\nSeconds : "<<sec;

    return 0;
}