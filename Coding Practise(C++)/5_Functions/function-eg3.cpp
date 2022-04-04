#include<iostream>
using namespace std;
int salaries[5] = {500000,1000000,900000,450000,300000};
int findMaxSalary(){
    int max_sal = 500000;
    for(int i = 0; i < 5; i++){
        if(max_sal < salaries[i]){
            max_sal = salaries[i];
        }
    }
    return max_sal;
}
int getTotalSalary(){
    int total = 0;
    for(int i = 0; i < 5; i++){
        total = total + salaries[i];
    }
    return total;
}
bool isOdd(int num){
    if(num%2)
        return true;
    else
        return false;
    
}
int main(){

    int result = findMaxSalary() + 500000;
    cout<<"Maximum salary is "<<result;
    cout<<"\nTotal Salary is "<<getTotalSalary();
    if(isOdd(100)){
        cout<<"\n100 is odd.";
    }
    else{
        cout<<"\n100 is even.";
    }
    return 0;
}