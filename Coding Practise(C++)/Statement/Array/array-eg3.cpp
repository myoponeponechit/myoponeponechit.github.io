#include<iostream>
using namespace std;
int main(){
    int mark[5] = {100,50,60,50,90};

    int m = mark[0];

    cout<<m;
    cout<<"\n"<<mark[1];
    cout<<"\n"<<mark[2];
    cout<<"\n"<<mark[3];
    cout<<"\n"<<mark[4];
    //cout<<"\n"<<mark[5];

    mark[4] = 100;
    cout<<"\nmark[4] : "<<mark[4];

    int total = mark[0] + mark[1] + mark[2] + mark[3] + mark[4] ;
    cout<<"\nTotal : "<<total;
     
    return 0;
}