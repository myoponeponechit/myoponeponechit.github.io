#include<iostream>
using namespace std;
string cities[3];
void initData(){
    for(int i = 0; i< 3; i++){
        cout<<"Enter name : ";
        cin>>cities[i];
    }

}
void showData(){
    cout<<"________City List__________\n";
    for(int i = 0; i < 3; i++){
        cout<<cities[i]<<"\n";
    }
}
int main(){
    initData();
    showData();
    return 0;
}