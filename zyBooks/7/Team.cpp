#include "Team.h"
#include <string>
#include <math.h>
using namespace std;

// TODO: Implement mutator functions - 
//       SetTeamName(), SetTeamWins(), SetTeamLosses()
void Team::SetTeamName(string name){
   teamName = name;
}

void Team::SetTeamWins(int win){
   teamWins = win;
}

void Team::SetTeamLosses(int loss){
   teamLosses = loss;
}
      
// TODO: Implement accessor functions - 
//       GetTeamName(), GetTeamWins(), GetTeamLosses()
string Team::GetTeamName(){
   return teamName;
}

int Team::GetTeamWins(){
   return teamWins;
}

int Team::GetTeamLosses(){
   return teamLosses;
}

   
// TODO: Implement GetWinPercentage()
double Team::GetWinPercentage(){
   return (double)teamWins / (double)(teamWins + teamLosses);
}