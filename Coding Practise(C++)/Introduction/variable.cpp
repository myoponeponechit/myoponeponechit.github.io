#include<iostream>
using namespace std;
int a=100;//global variable
void display(){
    int a=200;//local variable
    cout<<"Value of a inside fun:"<<a;
}
void displayAnother(int a){
    cout<<"Value of a inside fun"
}
int main(){

    return 0;
}