#include<iostream>
using namespace std;
int main(){
    int num;
    string result;
    cout<<"Enter a number : "; 
    cin>>num;
    result = (num % 2 == 1) ? "Odd." : "Even." ;
    cout<<num<<" is "<<result;

    return 0;
}
/*(exp1) ? (exp2) : (exp3) ;
--> exp1 must be boolean 
--> exp2 and exp3 must be same data type(choose any data type)
--> if exp1 is true , do exp2 and else do exp3
*/