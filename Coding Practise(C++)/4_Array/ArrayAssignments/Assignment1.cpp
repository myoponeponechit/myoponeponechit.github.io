#include<iostream>
using namespace std;
int main(){

    int numbers[5];
    for(int i = 0; i < 5; i++){
        cout<<"Enter number for index "<<i<<" : ";
        cin>>numbers[i];
    }
    
    cout<<"Numbers that divided by 3 : ";
    
    for(int i = 0; i < 5; i++){
        if(numbers[i] % 3 == 0){
            cout<<numbers[i]<<"\t";
        }
    }
    return 0;
}