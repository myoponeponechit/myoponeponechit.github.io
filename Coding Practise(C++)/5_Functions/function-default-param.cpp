#include<iostream>
using namespace std;
int addNumbers(int a, int b = 7,int c = 9){
    return a + b + c;
}
void show(){
    cout<<"Name is unknown!";
}
void show(string name){
    cout<<"Name is "<<name;
}
int main(){
    int n1,n2,n3;

    cout<<"Enter three numbers : ";
    cin>>n1,n2,n3;

    cout<<"\n1 arg passed : "<<addNumbers(n1);
    cout<<"\n2 arg passed : "<<addNumbers(n1,n2);
    cout<<"\n3 arg passed : "<<addNumbers(n1,n2,n3);

    return 0;
}