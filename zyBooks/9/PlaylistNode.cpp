#include "PlaylistNode.h"
#include <iostream>

PlaylistNode::PlaylistNode() {
   uniqueID = "none";
   songName = "none";
   artistName = "none";
   songLength = 0;
   nextNodePtr = 0;
}

PlaylistNode::PlaylistNode(string uniqueID, string songName, string artistName, int songLength) {
   this->uniqueID = uniqueID;
   this->songName = songName;
   this->artistName = artistName;
   this->songLength = songLength;
   nextNodePtr = 0;
}

PlaylistNode::PlaylistNode(string uniqueID, string songName, string artistName, int songLength, PlaylistNode* nextLoc) {
   this->uniqueID = uniqueID;
   this->songName = songName;
   this->artistName = artistName;
   this->songLength = songLength;
   nextNodePtr = nextLoc;
}


void PlaylistNode::InsertAfter(PlaylistNode* nodeLoc) {
   PlaylistNode* tmpNext;
   
   tmpNext = nextNodePtr;
   nextNodePtr = nodeLoc;
   nodeLoc->nextNodePtr = tmpNext;
}

PlaylistNode* PlaylistNode::GetNext() {
   return nextNodePtr;
}

void PlaylistNode::SetNext(PlaylistNode* nextLoc){
   this->nextNodePtr = nextLoc;
}


string PlaylistNode::GetID(){
   return uniqueID;
}

string PlaylistNode::GetSongName(){
   return songName;
}

string PlaylistNode::GetArtistName(){
   return artistName;
}

int PlaylistNode::GetSongLength(){
   return songLength;
}


void PlaylistNode::PrintPlaylistNode(){
   cout << "Unique ID: " << uniqueID << endl;
   cout << "Song Name: " << songName << endl;
   cout << "Artist Name: " << artistName << endl;
   cout << "Song Length (in seconds): " << songLength << endl;
   cout << endl;
}