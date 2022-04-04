#include<iostream>
using namespace std;
int rollnumbers[3];
string names[3];
int mark[3];

//initialze
void initialzeData(){
    for(int i = 0; i < 3; i++){
        cout<<"Enter data for student "<<(i+1);
        cout<<"\nRoll number : ";
        cin>>rollnumbers[i];
        cin.ignore();
        cout<<"\nName : ";
        getline(cin,names[i]);
        cout<<"\nMark : ";
        cin>>mark[i];
    }
}
//display all
void displayAll(){
    cout<<"\nRno \t Name \t Mark \n";
    cout<<"__________________________________\n";
    for(int i = 0; i < 3; i++){
        cout<<rollnumbers[i]<<"\t"<<names[i]<<"\t"<<mark[i]<<"\n";
    }
}

//find max mark
int findMax_mark(){
    int pos = 0;
    int max_mark = mark[0];
    for(int i = 0; i < 3; i++){
        if(max_mark < mark[i]){
            max_mark = mark[i];
            pos = i;
        }
    }
    return pos;
}

//search student with rno
int searchStudent(int rno){
    int pos = -1;//position
    for(int i = 0; i < 3; i++){
        if(rno == rollnumbers[i]){
            pos = i;
            break;
        }
    }
    return pos;
}
int main(){
    start :
    int input;
    cout<<"1. Initialze\n";
    cout<<"2. Display\n";
    cout<<"3. Find Max Mark \n";
    cout<<"4. Search Student\n";
    cout<<"Choose 1, 2, 3 or 4 : ";
    cin>>input;

    if(input == 1){
        initialzeData();
    }
    else if(input == 2){
        cout<<"\n___________All Students____________\n";
        displayAll();
    }
    else if(input == 3){
        int result = findMax_mark();
        cout<<"\n___________Student who got max mark___________\n";
        cout<<"Roll number : "<<rollnumbers[result];
        cout<<"\nName : "<<names[result];
        cout<<"\nMark : "<<mark[result];
    }
    else if(input == 4){
        int rno;
        cout<<"\nEnter roll number : ";
        cin>>rno;
        int result = searchStudent(rno);
        if(result == -1){
            cout<<"No Student with roll number '"<<rno<<"' !";
        }
        else{
            cout<<"\nRoll number : "<<rollnumbers[result];
            cout<<"\nName : "<<names[result];
            cout<<"\nMark : "<<mark[result];
        }
    }
    int confirm;
    cout<<"\nIf you want to continue, press 1 : ";
    cin>>confirm;
    if(confirm == 1){
        goto start;
    }
    return 0;
}