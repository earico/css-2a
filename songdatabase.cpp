///Eleazar Rico
///Dr. A
///Jan 25 2019
///Simple Song Database
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

struct music{
  string song_name;
  string artist;
  string album_name;
  int length_minutes;
  int length_seconds;
  int year_released;
  string month_released;
};

void displayMenu();
void addSong();
void searchSong();
void searchArtist();
void searchDuration();
void displaySongs();

const int MAX = 10;
music songs[MAX];
int counter = 0;

int main(){
  char choice = 'c';

  while (choice != 'q'){

    displayMenu();
    cin >> choice;

    switch(tolower(choice)){
      case '+':
        ///add songs
        addSong();
        break;
      case 's':
        ///search for song by name
        searchSong();
        break;
      case 'a':
        ///search for song by artist
        searchArtist();
        break;
      case 'm':
        ///display songs under x number of length_minutes
        searchDuration();
        break;
      case 'd':
        ///display song list
        displaySongs();
        break;
      default:
        break;
    }
  }
  return 0;
}

void displayMenu(){
    cout << "Select an option: \n";
    cout << "                  \n";
    cout << " + - add a song   \n";
    cout << " s - search by title\n";
    cout << " a - search by artist\n";
    cout << " m - search by duration\n";
    cout << " d - display all songs\n\n";
}

void addSong(){
    cin.ignore();
    cout << "Enter song name: ";
    getline(cin, songs[counter].song_name);

    cout << "Enter name of artist: ";
    getline(cin, songs[counter].artist);

    cout << "Enter album name: ";
    getline(cin, songs[counter].album_name);

    cout << "Enter duration in minutes: ";
    cin >> songs[counter].length_minutes;

    cout << "Enter duration in seconds: ";
    cin >> songs[counter].length_seconds;

    cout << "Enter year released: ";
    cin >> songs[counter].year_released;

    cout << "Enter month released: ";
    cin >> songs[counter].month_released;

    counter++;
}

void searchSong(){
    string song;

    cin.ignore();
    cout << "Enter name of a song: ";
    getline(cin, song);

    for (int i = 0; i < MAX; i++){
      if (songs[i].song_name == song){
        cout << "Song name - " << songs[i].song_name << endl;
        cout << "Artist - " << songs[i].artist << endl;
        cout << "Album - " << songs[i].album_name << endl;
        cout << "Duration - " << songs[i].length_minutes << ":";

        if (songs[i].length_seconds < 10)
          cout << "0" << songs[i].length_seconds << endl;

        else
          cout << songs[i].length_seconds << endl;

        cout << "Year released - " << songs[i].year_released << endl;
        cout << "Month released - " << songs[i].month_released << endl;
        cout << endl;
        break;
      }

      if (songs[i].song_name != song)
        cout << "Song not found" << endl;
        break;
    }
}

void searchArtist(){
    string artist;

    cin.ignore();
    cout << "Enter artist name: ";
    getline(cin, artist);

    for (int i = 0; i < MAX; i++){
      if (songs[i].artist == artist){
        cout << songs[i].song_name << " - " << songs[i].artist << " \n";
      }

      if (songs[i].artist != artist){
        cout << "No songs found by " << artist << endl;
        break;
      }
    }
}

void searchDuration(){
    int minutes;

    cout << "Enter max song duration: ";
    cin >> minutes;

    for (int i = 0; i < MAX; i++){
      if (songs[i].length_minutes <= minutes){
        cout << songs[i].song_name << " - " << songs[i].artist << endl;
      }

      if (songs[i].length_minutes == NULL)
        break;
    }
}

void displaySongs(){
    cout << "======= SONG LIST =======\n";

    for (int i = 0; i < MAX; i++){
      if (songs[i].song_name != "")
        cout << songs[i].song_name << " by " << songs[i].artist << endl;
      else
        break;
    }
}