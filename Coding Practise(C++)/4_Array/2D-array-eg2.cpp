#include<iostream>
using namespace std;
int main(){

    //array declare
    int num[2][3];
    //assign values
    num[0][0] = 90;
    num[0][1] = 100;
    num[0][2] = 60;
    num[1][0] = 80;
    num[1][1] = 100;
    num[1][2] = 70;
    //output
    cout<<num[0][0]<<"\t";
    cout<<num[0][1]<<"\t";
    cout<<num[0][2];
    cout<<"\n";
    cout<<num[1][0]<<"\t";
    cout<<num[1][1]<<"\t";
    cout<<num[1][2];
    return 0;
}