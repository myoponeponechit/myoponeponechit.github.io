#include<iostream>
using namespace std;
int main(){

    int mark[3] = {100,80,90};

    cout<<"\n-----------All Mark------------\n";
    for(int i = 0;i < 3;i++){
        cout<<"\t"<<mark[i]<<"\n";
    }

    string name[3] = {"Aung Aung","Maung Maung","Naung Naung"};

    cout<<"\n-----------Name List------------\n";
    for(int i = 0;i < 3;i++){
        cout<<"\t"<<name[i]<<"\n";
    }
    return 0;
}