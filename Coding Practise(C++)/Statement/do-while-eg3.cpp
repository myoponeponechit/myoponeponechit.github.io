#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"If you enter 'q' ,program will terminate!\n";
    do
    {
        cout<<"\nEnter any character : ";
        cin>>ch;

        if(ch == 'q')
            cout<<"Program terminate............\n";
        else if(ch >= '0' && ch <= '9')
            cout<<ch<<" is digit.";
        else
            cout<<ch<<" is not digit.";
    } while(ch != 'q');

    return 0;
}