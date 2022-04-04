#include<iostream>
#include<cctype>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){

    cout<<"__________Lib Functions of cctype__________\n";
    cout<<"9 is digit? : "<<isdigit('9');
    cout<<"\n9 is alphabet? : "<<isalpha('9');
    cout<<"\nA is alphabet? : "<<isalpha('A');
    cout<<"\nLower case of A : "<<(char)tolower('A');

    cout<<"\n___________Lib Functions of cmath_________\n";
    cout<<"3 power 5 : "<<pow(3,5);
    cout<<"\nSquare root of 25 : "<<sqrt(25);
    cout<<"\nValue of sin(30) : "<<sin(30);
    cout<<"\nValue of log(10) : "<<log(10);

    cout<<"\n_______________Lib Functions of iomanip________________\n";
    cout<<"Spring "<<setw(20)<<" Day";
    cout<<"\nLove "<<setw(27)<<" Yourself";
    return 0;
}