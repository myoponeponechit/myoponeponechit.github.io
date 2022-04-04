#include<iostream>
using namespace std;
int main(){

    int start_num,end_num;
    cout<<"Enter start value : ";
    cin>>start_num;
    cout<<"Enter end value : ";
    cin>>end_num;

    cout<<"The numbers divided by 8 & 5 :\n";
    for(int i = start_num; i <= end_num; i++){
         if(i % 8 == 0 && i % 5 == 0){
            cout<<i<<"\n";
        }
    }
    cout<<"The numbers divided by only 8 :\n";
    for(int i = start_num; i <= end_num; i++){
        if(i % 8 == 0 ){
            if(!(i % 5 == 0)){
                cout<<i<<"\n";
            }   
        }
    }
    cout<<"The numbers divided by only 5 :\n";
    for(int i = start_num; i <= end_num; i++){
        if(i % 5 == 0 ){
            if(!(i % 8 == 0)){
                cout<<i<<"\n";
            }   
        }
    }
    cout<<"The numbers not divided by 8 & 5 :\n";
    for(int i = start_num; i <= end_num; i++){
        if(!(i % 8 == 0)){
            if(!(i % 5 ==0)){
                cout<<i<<"\n";
            }
        }
    }
    
    return 0;
}