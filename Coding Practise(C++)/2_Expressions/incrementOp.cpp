#include<iostream>
using namespace std;
int main(){
    int var1=5,var2=5;

    var1++;//var1=var1 + 1;
    cout<<"After var1++,var1 ="<<var1;

    int result=(var2++)-2;//5-2=>var2=6(post-increment)
    //int result=(++var2)-2;//6-2=>var2=6(pre-increment)
    cout<<"\nResult = "<<result;
    cout<<"\nVar2= "<<var2;

    return 0;
}