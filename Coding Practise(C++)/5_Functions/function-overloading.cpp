#include<iostream>
using namespace std;
bool equals(int arg1,int arg2){
    return (arg1 == arg2) ? true : false;
}
bool equals(double arg1,double arg2){
    return (arg1 == arg2) ? true : false;
}
bool equals(char arg1,char arg2){
    return (arg1 == arg2) ? true : false;
}
bool equals(string arg1,string arg2){
    return (arg1 == arg2) ? true : false;
}
int main(){
    cout<<"100 == 200 : "<<equals(100,200);
    cout<<"\n13.5 == 13.5 :"<<equals(13.5,13.5);
    cout<<"\n'A' == 'B' : "<<equals('A','B');
    cout<<"\nHello == World : "<<equals("Hello","World");
    return 0;
}