#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while(i < 10)
    {
        i++;
        if(i == 4){
            break;//exit loop and execute next statement
        }
        cout<<"Statement "<<i<<"\n";
    }
    cout<<"\n...........Program end.........";
    return 0;
}