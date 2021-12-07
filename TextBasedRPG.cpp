#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TextBasedRPG.h"
using namespace std;

string introLines = "This is where your adventure starts. \n You wake up, dazzled, in a ruined building. You can't remember how you got there.";

int main()
{
    cout << "Welcome to the most awesome text based rpg game you have ever played" << endl;
    cout << "First, enter your age: " << endl;
    cin >> ageInput;
    if (ageInput <= 12) {
        cout << "Hah, grow up little bitch! \n Whatever, you can play my fantastic game if you want..." << endl;
    }
    else if (ageInput < 18) {
        cout << "Well well, couldn't you wait a few years? You might need an adult head if you wanna preavail in this game" << endl;
    }
    else if (ageInput == 18) {
        cout << "Fuck you Csaba!" << endl;
        isCsaba = true;
    }
    else if (ageInput <= 30) {
        cout << "I hope you wil enjoy this game and have a great time!" << endl;
    }
    else {
        cout << "what the fuck man? Why would you play this shit you old ass bitch? \n Ehh, forget it, and enjoy, i guess..." << endl;
    }
    cout << introLines << endl;
}

