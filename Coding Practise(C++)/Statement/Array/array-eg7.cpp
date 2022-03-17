#include<iostream>
using namespace std;
int main(){

    int len = 4;
    int numbers[len] = {7,16,25,20};

    cout<<"______________Orginal Array_____________\n";
    for(int i = 0;i < len; i++){
        cout<<numbers[i]<<"\t";
    }
    cout<<"\n\n______________Reversed Array____________\n";
    for(int j = (len - 1);j >=0; j--){
        cout<<numbers[j]<<"\t";
       
    }
    return 0;
}