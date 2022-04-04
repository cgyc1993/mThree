#include <iostream>
using namespace std;

string CheckCharacter(string word, int index) {
	char checkChar = word.at(index);
	string result = "";
	
	if (isalpha(checkChar)){
	   result = result + "Character \'" + word.at(index) + "\' is a letter";
	}
	else if (isspace(checkChar)){
	   result = result +  "Character \'" + word.at(index) + "\' is a whitespace";
	}
	else if (isdigit(checkChar)){
	   result = result +  "Character \'" + word.at(index) + "\' is a digit";
	}
	else {
	   result = result +  "Character \'" + word.at(index) + "\' is unknown";
	}
	
	return result;
}

int main() {
	cout << CheckCharacter("happy birthday", 2) << endl;
	cout << CheckCharacter("happy birthday", 5) << endl;
	cout << CheckCharacter("happy birthday 2 you", 15) << endl;
	cout << CheckCharacter("happy birthday!", 14) << endl;

	return 0;
}