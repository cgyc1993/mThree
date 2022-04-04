#ifndef PLAYLIST_NODE_H
#define PLAYLIST_NODE_H

#include <string>
using namespace std;

class PlaylistNode {

   public:
      PlaylistNode();
      PlaylistNode(string uniqueID, string songName, string artistName, int songLength);
      PlaylistNode(string uniqueID, string songName, string artistName, int songLength, PlaylistNode* nextLoc);

      void InsertAfter(PlaylistNode* nodeLoc);
      PlaylistNode* GetNext();
      void SetNext(PlaylistNode* nextLoc);
      
      string GetID();
      string GetSongName();
      string GetArtistName();
      int GetSongLength();

      void PrintPlaylistNode();

   
   private:
      string uniqueID;
      string songName;
      string artistName;
      int songLength;
      PlaylistNode* nextNodePtr;
};

#endif