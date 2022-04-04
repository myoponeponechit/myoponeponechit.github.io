#include<iostream>
using namespace std;
int main(){
    int total=0,count=0;
    int start_num,end_num;
    float avg;
    cout<<"Enter start number : ";
    cin>>start_num;
    cout<<"Enter end number : ";
    cin>>end_num;

    while(start_num<=end_num){
        total+=start_num;
        count+=1;
        start_num++;

    }

    avg = (float)total/count ;
    cout<<"Total : "<<total;
    cout<<"\nCount : "<<count;
    cout<<"\nAverage : "<<avg;


    return 0;
}