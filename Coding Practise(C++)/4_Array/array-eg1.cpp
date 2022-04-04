#include<iostream>
using namespace std;
int main(){
    int mark[5] = {90,50,60,70,100};
    cout<<"\n"<<"index of 2 in mark : "<<mark[2];

    mark[2]=90;
    cout<<"\n"<<"index of 2 in mark : "<<mark[2];

    mark[1] = mark[2] + mark[1];
    cout<<"\n"<<"index of 1 in mark : "<<mark[1];

    int mark1[5] = {};
    cout<<"\n"<<"index of 1 in mark1 : "<<mark1[1];

    int mark2[5]={66,77,80};
    cout<<"\n"<<"index of 3 in mark2 : "<<mark2[3];

    return 0;
}