#include<iostream>
using namespace std;
void checkEvenOrOdd(int num){
    if(num % 2)
        cout<<num<<" is odd.";
    else
        cout<<num<<" is even.";
    cout<<"\n";
}
int main(){
    int num1 = 153,num2 = 844,num3 = 751;
    checkEvenOrOdd(num1);
    checkEvenOrOdd(num2);
    checkEvenOrOdd(num3);
    return 0;
}