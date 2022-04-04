#include<iostream>
using namespace std;
int main(){

    bool result;

    result=(3!=5) && (3<5);//true
    cout<<"(3!=5) && (3<5):"<<result;

    result=(3==5) && (3<5);//true
    cout<<"\n(3==5) && (3<5):"<<result;
    
    result=(3!=5) && (3>5);//true
    cout<<"\n(3!=5) && (3>5):"<<result;

    result=(3!=5) || (3<5);//true
    cout<<"\n(3!=5) || (3<5):"<<result;

    result=(3!=5) || (3>5);//true
    cout<<"\n(3!=5) || (3>5):"<<result;

    result=(3==5) || (3>5);//true
    cout<<"\n(3==5) || (3>5):"<<result;

    result=!(3==5);
    cout<<"\n!(3==5):"<<result;

    result=!((3!=5) || (3>5));
    cout<<"\n!((3!=5) || (3>5)):"<<result;

    result=!((3==5) || (3>5));
    cout<<"\n!((3==5) || (3>5)):"<<result;

    return 0;
}