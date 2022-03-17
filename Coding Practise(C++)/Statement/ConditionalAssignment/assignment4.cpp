#include<iostream>
using namespace std;
int main(){
    int programMark,engMark,mathMark;
    cout<<"Enter marks for Programming : ";
    cin>>programMark;
    cout<<"Enter marks for English : ";
    cin>>engMark;
    cout<<"Enter marks for Math : ";
    cin>>mathMark;

    int totalMark = programMark + engMark + mathMark;
    int avgMark = totalMark/3 ;
    cout<<"---------------------------------------------";
    if(programMark < engMark && engMark > mathMark){
        cout<<"\nSubject that got maximum marks is English.";

    }
    else if(programMark < mathMark && mathMark > engMark){
        cout<<"\nSubject that got maximum marks is Math.";
    }
    else{
        cout<<"\nSubject that got maximum marks is Programming.";
    }
    if(programMark < engMark && programMark < mathMark){
        cout<<"\nSubject that got minimum marks is Programming.";
    }
    else if(engMark < programMark && engMark < mathMark){
        cout<<"\nSubject that got minimum marks is English.";
    }
    else{
        cout<<"\nSubject that got minimum marks is Math.";
    }
    cout<<"\nTotal marks : "<<totalMark;
    cout<<"\nAverage marks : "<<avgMark;
    if(programMark >=80 || engMark >= 80 || mathMark >= 80){
    cout<<"\nDistinction subjects - ";
        if(programMark >= 80){
            cout<<"\n\t\tProgramming";
        }
        if(engMark >= 80){
            cout<<"\n\t\tEnglish";
        }
        if(mathMark >= 80){
            cout<<"\n\t\tMath";
        }
    }
    else{
        cout<<"\nDistinction subjects - Non";
    }
    
    cout<<"\n---------------------------------------------";
    return 0;
}