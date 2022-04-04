#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int DateParser(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	
	// TODO: Read dates from input, parse the dates to find the one
	//       in the correct format, and output in m/d/yyyy format
	
	istringstream inSS;      // Input string stream
   string lineString;       // Holds line of text
   
   string month;
   int    date;
   int    year;
   char   dummyChar;
   
   getline(cin, lineString);
   
   while (lineString != "-1") {
      dummyChar = ' ';

      // Copy input to inSS's string buffer
      inSS.clear();
      inSS.str(lineString);
      
      inSS.clear();
      
      inSS >> month >> date >> dummyChar >> year;
      if (inSS.eof() && dummyChar == ',') {
         cout << DateParser(month) << "/" << date << "/" << year << endl;
      }
      
      // Get next user input
      getline(cin, lineString);
   }

}
