#include<iostream>
using namespace std;
int main(){

    string names[2];
    int roll_num[2];
    int marks[2][3];

    //user input
    for(int i = 0; i < 2; i++){
        cout<<"\nEnter name : ";
        getline(cin,names[i]);
        cout<<"\nEnter roll number : ";
        cin>>roll_num[i];
        //get marks
        for(int j = 0; j < 3; j++){
            cout<<"Mark "<<(j+1)<<" : ";
            cin>>marks[i][j];
        }
        cin.ignore();
    }
    //display all
    cout<<"\n__________All Students____________\n";
    cout<<"\nRno\tName\tMark1\tMark2\tmark3\n";
    cout<<"-------------------------------------\n";
    for(int i = 0; i < 2; i++){
        cout<<roll_num[i]<<"\t"<<names[i]<<"\t";
        for(int j = 0; j < 3; j++){
            cout<<marks[i][j]<<"\t";
        }
        cout<<"\n";
    }
    //display name and total marks
    cout<<"\n___________Students Info with total marks_____________\n";
    for(int i = 0; i < 2; i++){
        cout<<"\n\nRno - "<<roll_num[i];
        //find total
        int total = 0;
        for(int j = 0; j < 3; j++){
            total += marks[i][j];
        }
        cout<<"\nTotal marks : "<<total;
        cout<<"\nAverage : "<<total/3;
    }
    //find student with roll no:
    int search_rno;
    cout<<"\n\nEnter roll number to search : ";
    cin>>search_rno;
    int result = -1;
    for(int i = 0; i < 2; i++){
        if(search_rno == roll_num[i]){
            result = i;
            break;
        }
    }
    if(result == -1){
        cout<<"\nNo student with "<<search_rno<<" !!!";
        //display all
    
        cout<<"\n__________All Students____________\n";
        cout<<"\nRno\tName\tMark1\tMark2\tmark3\n";
        cout<<"-------------------------------------\n";
        for(int i = 0; i < 2; i++){
            cout<<roll_num[i]<<"\t"<<names[i]<<"\t";
            for(int j = 0; j < 3; j++){
                cout<<marks[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"\nRno : "<<search_rno;
        cout<<"\nName : "<<names[result];
        cout<<"\nMarks1 : "<<marks[result][0];
        cout<<"\nMarks2 : "<<marks[result][1];
        cout<<"\nMarks3 : "<<marks[result][2];
    }

    return 0;
}