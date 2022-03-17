#include<iostream>
using namespace std;
int main(){

    int mark[4];
    //user input
    for(int i = 0; i < 4; i++){
        cout<<"Enter mark "<<(i + 1)<<": ";
        cin>>mark[i];
    }
    //user output
    int j = 0;
    cout<<"\n_______________All Mark______________\n";
    while(j<4){
        //mark[0] = 100
        cout<<"mark["<<j<<"] = "<<mark[j];
        cout<<"\n";
        j++;
    }
    //total
    int total = 0;
    int k = 0;
    do{
        total = total + mark[k];
        k++;
    }
    while(k<4);

    cout<<"Sum : "<<total;
    cout<<"\nAverage : "<<(float)total/4;

    return 0;
}