#include <iostream>
using namespace std;
#include "PlaylistNode.h"

char PrintMenu(string playlistTitle){
   char option = ' ';
   
   cout << playlistTitle << " PLAYLIST MENU" << endl;
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist" << endl;
   cout << "t - Output total time of playlist (in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit" << endl;
   
   cout << endl;
      
   while (option != 'a' && option != 'd' && option != 'c' && option != 's' && option != 't' && option != 'o' && option != 'q'){
      cout << "Choose an option:" << endl;
      cin >> option;
   }
   
   return option;
}


int main() {

   PlaylistNode* headNode;
   PlaylistNode* currNode;
   PlaylistNode* lastNode;

   string playlistTitle;
   cout << "Enter playlist's title:" << endl;
   getline(cin, playlistTitle);
   cout << endl;
   
   string id;
   string songName;
   string artistName;
   int songLength;
   
   // Front of nodes list
   headNode = new PlaylistNode();
   lastNode = headNode;
   
   char option = ' ';
   int counter = 0;
   int total = 0;

   while (option != 'q'){
      option = PrintMenu(playlistTitle);
      
      switch (option){
         case 'a':
            cout << "ADD SONG" << endl;
            cin.ignore();
            cout << "Enter song's unique ID:" << endl;
            getline(cin, id);
            cout << "Enter song's name:" << endl;
            getline(cin, songName);
            cout << "Enter artist's name:" << endl;
            getline(cin, artistName);
            cout << "Enter song's length (in seconds):" << endl;
            cin >> songLength;
            
            currNode = new PlaylistNode(id, songName, artistName, songLength);
            
            lastNode->InsertAfter(currNode);
            lastNode = currNode;
            
            cout << endl;
            break;
            
         case 'd':
            cout << "REMOVE SONG" << endl;
            cout << "Enter song's unique ID:" << endl;
            cin.ignore();
            getline(cin, id);
            
            currNode = headNode;
            
            while (currNode != 0) {
               PlaylistNode* tempNext = currNode->GetNext();
               
               if (tempNext->GetID() == id){
                  currNode->SetNext(tempNext->GetNext());
                  
                  cout << "\"" << tempNext->GetSongName() << "\" removed." << endl;
                  cout << endl;
                  break;
               }
               
               currNode = currNode->GetNext();
            }
            break;
            
         case 'c':
            int oldPos;
            int newPos;
            PlaylistNode* oldNode;
            
            counter = 0;
            
            cout << "CHANGE POSITION OF SONG" << endl;
            cin.ignore();
            cout << "Enter song's current position:" << endl;
            cin >> oldPos;
            cout << "Enter new position for song:" << endl;
            cin >> newPos;
            
            currNode = headNode;
            
            while (currNode != 0) {
               oldNode = currNode->GetNext();
               
               if (counter == (oldPos - 1)){
                  currNode->SetNext(oldNode->GetNext());
                  break;
               }
               counter++;
               currNode = currNode->GetNext();
            }
            
            counter = 0;
            
            currNode = headNode;
            
            while (currNode != 0) {
               if (counter == (newPos - 1)){
                  oldNode->SetNext(currNode->GetNext());
                  currNode->SetNext(oldNode);
                  cout << "\"" << oldNode->GetSongName() << "\" moved to position " << newPos << endl << endl;;
                  break;
               }
               counter++;
               currNode = currNode->GetNext();
            }
            
            break;
            
         case 's':
            cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
            cout << "Enter artist's name:" << endl;
            cin.ignore();
            getline(cin, artistName);
            
            cout << endl;
            
            counter = 0;
            currNode = headNode->GetNext();           
            
            while (currNode != 0) {
               counter++;
      
               if (currNode->GetArtistName() == artistName){
                  cout << counter << "." << endl;
                  currNode->PrintPlaylistNode();
               }

               currNode = currNode->GetNext();
            }
            
            break;
            
         case 't':
            total = 0;
   
            currNode = headNode->GetNext();
            
            cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
            
            while (currNode != 0) {
               total += currNode->GetSongLength();
               currNode = currNode->GetNext();
            }
            
            cout << "Total time: " << total << " seconds" << endl;
            cout << endl;
            break;
         
         case 'o':
            counter = 0;
   
            currNode = headNode->GetNext();
            
            cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
            
            while (currNode != 0) {
               counter++;
               
               cout << counter << "." << endl;
               currNode->PrintPlaylistNode();
               currNode = currNode->GetNext();
            }
            
            if (counter == 0){
               cout << "Playlist is empty" << endl;
               cout << endl;
            }
            break;
      }
   }

   

   return 0;
}
