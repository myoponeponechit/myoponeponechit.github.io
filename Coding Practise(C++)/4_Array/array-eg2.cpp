#include<iostream>
using namespace std;
int main(){
    
    int mark1[] = {100,50,90};
    int mark2[] = {};
    int mark3[] = {100,50,90,70,80,100};

    cout<<"Size of int : "<<sizeof(int);
    cout<<"\nSize of mark1 : "<<sizeof(mark1);
    cout<<"\nLength of mark1 : "<<sizeof(mark1)/sizeof(int);
    cout<<"\nLength of mark2 : "<<sizeof(mark2)/sizeof(int);
    cout<<"\nLength of mark3 : "<<sizeof(mark3)/sizeof(int);
    
    return 0;
}