#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "TextBasedRPG.h"
#include "Character.h"
#include "NPC.h"
using namespace std;

int main()
{
    // Intro lines and player name selection
    /*cout << "Welcome to the most awesome text based rpg game you have ever played" << endl;
    cout << "First, enter your age: " << endl;
    cin >> ageInput;
    if (ageInput <= 12) {
        cout << "Hah, grow up little bitch! \n Whatever, you can play my fantastic game if you want..." << endl;
    }
    else if (ageInput < 18) {
        cout << "Well well, couldn't you wait a few years? You might need an adult head if you wanna prevail in this game" << endl;
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
    }*/
    cout << introLines << endl;
    Sleep(1000);
    cout << "Type your name:   ";
    cin >> playerName;
    cout << "Your name is " << playerName << endl;
    
    // Choosing class
    cout << "Choose your character class. \n[1] Warrior [2] Mage [3] Archer [4] Rogue: ";
    int classChoice;
    cin >> classChoice;
    while (!cin >> classChoice || classChoice > 4 || classChoice < 1) {
        cout << "Not a valid choice. \nChoose your character class. \n[1] Warrior [2] Mage [3] Archer [4] Rogue : ";
        cin >> classChoice;
    }

    cout << "Choose your race. \n[1] Human [2] Elf [3] Dwarf: ";
    int raceChoice;
    cin >> raceChoice;
    while (!cin >> raceChoice || raceChoice > 3 || raceChoice < 1) {
        cout << "Not a valid choice. \nChoose your character class. \n[1] Warrior [2] Mage [3] Archer [4] Rogue : ";
        cin >> raceChoice;
    }

    // Player character initialization
    Character playerCharacter(playerName, classChoice, raceChoice);
    cout << "\nWelcome " << playerCharacter.GetName() << " [" << playerCharacter.GetClass() << "]. Let's begin your adventure." << endl;

    //TODO Add other lines 
    DecideAction();

    Sleep(3000);
    
}

