#include "Artwork.h"
#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// TODO: Define default constructor
Artwork::Artwork(){
   title = "None";
   yearCreated = 0;
   Artist artist;
}

// TODO: Define second constructor to initialize
//       private fields (title, yearCreated, artist)
Artwork::Artwork(string title, int yearCreated, Artist artist){
   this->title = title;
   this->yearCreated = yearCreated;
   this->artist = artist;
}

// TODO: Define get functions: GetTitle(), GetYearCreated()
string Artwork::GetTitle(){
   return title;
}

int Artwork::GetYearCreated(){
   return yearCreated;
}

// TODO: Define PrintInfo() function
void Artwork::PrintInfo(){
   artist.PrintInfo();
   cout << "Title: " << title << ", " << yearCreated;
}