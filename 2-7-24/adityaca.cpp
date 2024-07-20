#include <iostream> 
#include <string>

using namespace std;

// Node structure to store song information
struct Song {
  string name; // name of the song
  string artist; // artist of the song
  int duration; // duration of song in seconds
  Song* next; // pointer to next song
  Song* prev; // pointer to previous song
};

// Playlist class to represent the playlist
class Playlist {
  private:
    Song* head; // pointer to head of playlist
    Song* tail; // pointer to tail of playlist
  public:
    Playlist() {
      // constructor to initialize head and tail
      head = NULL;  
      tail = NULL;
    }
    // Function to add a new song to the playlist
    void addSong(string name, string artist, int duration) {
      // create a new song node
      Song* newSong = new Song(); 
      // set song details
      newSong->name = name;
      newSong->artist = artist;
      newSong->duration = duration;
      // if playlist is empty, new song is head and tail
      if(head == NULL) {
        head = newSong;
        tail = newSong;
        newSong->next = NULL; 
        newSong->prev = NULL;
      }
      else {
        
        // add new song after tail 
        tail->next = newSong;
        newSong->prev = tail;
        tail = newSong;
        // set next of new song as NULL
        newSong->next = NULL;  
      }
    }
    // Function to print all songs in the playlist
    void printSongs() {
      
      Song* current = head; // start from head
      
      // iterate till end of list
      while(current != NULL) {
        // print current song details
        cout << current->name << " - " << current->artist << " (" << current->duration << " secs)" << endl;
        // move to next song
        current = current->next;
      }
    }
    // Function to remove a song from the playlist
    void removeSong(string name) {
      // start from head
      Song* current = head;
      // iterate till end of list
      while(current != NULL) {
        // if current song is to be removed
        if(current->name == name) {
          // if head node, update head
          if(current == head) {
            head = current->next;
            // update prev of new head as NULL
            if(head) head->prev = NULL; 
          }
          // if tail node, update tail
          else if(current == tail) {
            tail = current->prev;  
            tail->next = NULL;
          }
          // otherwise, modify next and prev pointers
          else {
            current->prev->next = current->next;
            current->next->prev = current->prev;
          }
          
          // delete current node
          delete current;
          return;
        }
        
        // move to next node
        current = current->next;  
      }
      
      // song not found
      cout << "Song not found in playlist." << endl;
    }

};

int main() {

  // create playlist
  Playlist myPlaylist; 
  
  // add some songs
  myPlaylist.addSong("Believer", "Imagine Dragons", 196);
  myPlaylist.addSong("Starboy", "The Weeknd", 236);
  myPlaylist.addSong("Something Just Like This", "The Chainsmokers", 223);
  cout << "Songs Before Deletion" << endl;
  // print songs
  myPlaylist.printSongs();
  
  // remove a song
  myPlaylist.removeSong("Starboy");
  cout << "Songs After Deletion" << endl;
  // print songs after removal
  myPlaylist.printSongs();

  return 0;
}