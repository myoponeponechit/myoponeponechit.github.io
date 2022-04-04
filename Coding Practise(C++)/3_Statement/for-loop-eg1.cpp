#include<iostream>
using namespace std;
int main(){
    int j;
    cout<<"Enter times : ";
    cin>>j;
    for(int i = 0;i < j;i++)
    {
        cout<< (i+1) <<". Hello World!";
        cout<<"\n";
    }

    return 0;
}