#include<iostream>
using namespace std;
void calculateDiscountItem(int itemPrice, int discountValue)
{
    int result;
    result = itemPrice - (itemPrice * discountValue/100);
    cout<<"__________Calculate Discount Item___________";
    cout<<"\nItem Price : "<<itemPrice;
    cout<<"\nDiscount Value : "<<discountValue;
    cout<<"\nAfter Discount, Price : "<<result;
    cout<<"\n-----------------------------------------\n\n";
}
void calculateInterest(int loanAtm, int interestRate, int noOfMonths){
    int interest = loanAtm * interestRate/100;
    int result = noOfMonths * interest;
    cout<<"____________Calculate Interest_____________";
    cout<<"\nMonthly interest : "<<interest;
    cout<<"\nTotal interest : "<<result;
    cout<<"\n-----------------------------------------\n\n";
}
void countZeroOccurences(){
    int num;
    int number;
    int count = 0;
    cout<<"How many times to enter number : ";
    cin>>num;
    for(int i = 0; i < num; i++){
        cout<<"Enter number "<<(i+1)<<" : ";
        cin>>number;
        if(number == 0){
            count++;
        }
    }
    cout<<"\nZero occurs '"<<count<<"' times!";
}
int main(){
    //calculate discount item
    int price,discount;
    cout<<"Enter item price : ";
    cin>>price;
    cout<<"Enter discount parcent : ";
    cin>>discount;
    calculateDiscountItem(price,discount);
    //calculate interest
    int amount,rate,months;
    cout<<"\nEnter loan amount : ";
    cin>>amount;
    cout<<"Enter interest rate : ";
    cin>>rate;
    cout<<"Enter months : ";
    cin>>months;
    calculateInterest(amount,rate,months);
    //count zero occurences
    countZeroOccurences();
    return 0;
}