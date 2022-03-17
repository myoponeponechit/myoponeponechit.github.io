#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while(i < 8)
    {
        i++;
        if(i == 4){
            continue;//skip current iteration and go to next iteration
        }
        cout<<"Statement "<<i<<"\n";
    }
    cout<<"\n...........Program end.........";
    return 0;
}