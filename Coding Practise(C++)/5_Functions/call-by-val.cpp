#include<iostream>
using namespace std;

void changeValue(int val){ //val = 100
    val = val + 20;//val = 100 + 20
    cout<<"Value inside function : "<<val<<"\n";//120
}

void changeAnother(int *val){
    *val = *val + 20;
    cout<<"\nValue inside function : "<<*val<<"\n";
}

int main(){

    int num = 100;
    cout<<"Before calling function, num: "<<num<<"\n";//100

    changeValue(num);
    cout<<"After calling function, num: "<<num;

    cout<<"\n\n_________Call by Reference____________\n";
    int num1 = 100;
    cout<<"\nBefore calling function, num1: "<<num1;//100

    changeAnother(&num1);
    cout<<"After calling function, num1: "<<num1;

    return 0;
}