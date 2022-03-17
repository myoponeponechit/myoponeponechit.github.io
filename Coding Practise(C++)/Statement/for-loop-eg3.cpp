#include<iostream>
using namespace std;
int main(){
    int count,i;
    float total;
    int start_num,end_num;
    total=0;
    count=0;
    cout<<"Enter start value : ";
    cin>>start_num; // 1
    cout<<"Enter end value : ";
    cin>>end_num; // 5
    
    for(i = start_num;i <= end_num ; i++){ 
        total=total + i;
        count++;
    }
    cout<<"Total : "<<total;
    cout<<"\nCount : "<<count;
    cout<<"\nAverage : "<< total / count;
    return 0;
}
/*
i=1;i<=5;i++
  total=0+(i=1)=1 ;
  count=(count=0)+1=1;  ---->i=2

  i=2;i<=5;i++
  total=1+(i=2)=3;
  count=(count=1)+1=2;  ---->i=3

  i=3;i<=5;i++
  total=3+(i=3)=6;
  count=(count=2)+1=3;  ---->i=4

  i=4;i<=5;i++
  total=6+(i=4)=10;
  count=(count=3)+1=4;  ---->i=5

  i=5;i<=5;i++
  total=10+(i=5)=15;
  count=(count=4)+1=5;   ---->i=6

  i=6;i<=5;i++  ---->false

-------Output----------

  Total : 15
  Average : total/count = 15/5 = 3

  ---------------------
  */