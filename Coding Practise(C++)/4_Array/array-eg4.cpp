#include<iostream>
using namespace std;
int main(){

    int mark[5];//must declire array size 

    cout<<"Enter mark : ";
    cin>>mark[0];
    cout<<"Enter mark : ";
    cin>>mark[1];
    cout<<"Enter mark : ";
    cin>>mark[2];
    cout<<"Enter mark : ";
    cin>>mark[3];
    cout<<"Enter mark : ";
    cin>>mark[4];

    cout<<"\n------------All Marks--------------";
    cout<<"\n"<<mark[0];
    cout<<"\n"<<mark[1];
    cout<<"\n"<<mark[2];
    cout<<"\n"<<mark[3];
    cout<<"\n"<<mark[4];

    return 0;
}