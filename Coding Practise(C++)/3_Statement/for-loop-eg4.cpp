#include<iostream>
using namespace std;
int main(){
    int k,j;
    cout<<"Enter start number : ";
    cin>>k;
    cout<<"Enter end number : ";
    cin>>j;
    cout<<"------------------------------------------------------------------------------\n";
    cout<<"Odd numbers between "<<k<<" and "<<j<<" are";
    for(int i = k;i < j;i++){
        if(i % 2 == 1){
            cout<<"\t"<<i;
        }
        
    }
    cout<<"\n------------------------------------------------------------------------------";
    return 0;
}