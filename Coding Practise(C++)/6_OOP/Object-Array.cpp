#include<iostream>
using namespace std;
class Song {
    private : 
        string title;
        string album;
        string singer;
    public : 
        Song() {
            title = "unknown title";
            album = "unknown album";
            singer = "unknown singer";
        }
        void setTitle(string input) {
            this->title = input;
        }
        string getTitle() {
            return this->title;
        }
        void setAlbum(string input) {
            this->album = input;
        }
        string getAlbum() {
            return this->album;
        }
        void setSinger(string input) {
            this->singer = input;
        }
        string getSinger() {
            return this->singer;
        }
        void showData() {
            cout<<"\n";
            cout<<getTitle()<<"\t";
            cout<<getAlbum()<<"\t";
            cout<<getSinger();
        }
};
int main() {
    Song songs[3];

    string uTitle, uSinger, uAlbum;
    for(int i = 0; i < 3; i++) {
        cout<<"Enter data for Song"<<i+1<<" : ";
        cout<<"\nTitle : ";
        getline(cin,uTitle);
        cout<<"\nAlbum : ";
        getline(cin,uAlbum);
        cout<<"\nSinger : ";
        getline(cin,uSinger);

        songs[i].setTitle(uTitle);
        songs[i].setAlbum(uAlbum);
        songs[i].setSinger(uSinger);
        cout<<"\n\n";
    }
    cout<<"\n\n_______________All Songs______________\n";
    cout<<" Song title \t Album Name \t Singer \n";
    cout<<"------------------------------------------\n";
    for(int i = 0; i < 3; i++) {
        songs[i].showData();
    }
    /*Song s = songs[1];
    string title = songs[0].getTitle();//title = "unknown title"
    cout<<"Title : "<<s.getTitle();
    //songs[0] = "new title";//songs[0] = string
    Song newSong = Song();
    newSong.setAlbum("New Album");
    song[0] = newSong;
    cout<<"\nAlbum : "<<songs[0].getAlbum();*/
    return 0;
}