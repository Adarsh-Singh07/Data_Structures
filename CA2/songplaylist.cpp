#include <iostream>
#include <string>
using namespace std;
struct playlist {
    string song;
    string artist;
    int duration;
    playlist* next;
    playlist* prev;
} *start, *tail, *temp, *ptr, *song1, *song2;
insertsong (string songname, string artistname, int songduration) {
    ptr = new playlist();
    ptr->song = songname;
    ptr->artist = artistname;
    ptr->duration = songduration;
    ptr->next = nullptr;
    ptr->prev = nullptr;
    if (start == nullptr) {
        start = new playlist();
        start = ptr;
        tail = ptr;
    }
    else {
        temp = start;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        ptr->prev = temp;
        temp->next = ptr;
    }
    tail = ptr;
}
traversesong () {
    temp = start;
    int i = 0;
    while (temp != nullptr) {
        i ++;
        cout << i << ".";
        cout << "Song name-> " << temp->song << ", ";
        cout << "Artist name-> " << temp->artist<<  ", ";
        cout << "Song duration-> " << temp->duration <<"."<< endl;
        temp = temp->next;
    }
}
deletesong(string songname) {
    if (start->song  == songname) {
        start->next->prev = nullptr;
        temp = start;
        start = start->next;
        free(temp);
    }
    else {
        temp = start;
    while (temp != nullptr) {
        temp = temp->next;
        if (temp->song == songname) {
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            free(temp);
        }
    }
    if (temp->song == songname) {
        temp->prev->next = nullptr;
    }
}
}
swapsong(int pos1, int pos2) {
    int i = 1;
    temp = start;
    string swapsong, swapartist;
    int swapduartion;
    song1 = new playlist();
    song2 = new playlist();
    while (temp != nullptr) {
        if (i == pos1) {
            song1 = temp;
        }
        else if (i == pos2) {
            song2 = temp;
        }
    }
    swapsong = song2->song;
    swapartist = song2->artist;
    swapduartion = song2->duration;
    song2->song = song1->song;
    song2->artist = song1->artist;
    song2->duration = song1->duration;
    song1->song = swapsong;
    song1->artist = swapartist;
    song1->duration = swapduartion;
    i = 1;
    while (temp != nullptr) {
        if (i == pos1) {
            temp = song1;
        }
        else if(i == pos2) {
            temp = song2;
        }
        i ++;
    }
}
int main() {
    int n;
    string songname;
    string artistname;
    int songduration;
    cout << "Enter the number of songs u want to add: ";
    cin >> n;
    for (int i = 0 ; i < n ; i ++) {
        cout << "Enter song "<< (i+1) << " : ";
        cin >> songname;
        cout << "Enter the artist name : ";
        cin >> artistname;
        cout << "Enter the duration of the song : ";
        cin >> songduration;
        insertsong(songname, artistname, songduration);
    }
    traversesong();
    cout << "Enter the song u want to delete from the playlist: ";
    cin >> songname;
    deletesong(songname);
    traversesong();
    // cout << "Enter 2 positions u want to swap: ";
    // int pos1, pos2;
    // cin >> pos1;
    // cin >> pos2;
    // swapsong(pos1, pos2);
    // traversesong();
}