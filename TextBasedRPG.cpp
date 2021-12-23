#include "TextBasedRPG.h"

void WaitInput()
{
    cout << "" << endl;
    cout << "____________________________________________________________" << endl;
    system("pause");
    cout << endl;
}

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
    Sleep(500);
    cout << "Type your name: ";
    cin >> playerName;
    cout << "Your name is " << playerName << endl;
    
    // Choosing class
    cout << "Choose your class. \n[1] Warrior [2] Mage [3] Archer [4] Rogue: ";
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
        cout << "Not a valid choice. \nChoose your character race. \n[1] Human [2] Elf [3] Dwarf: ";
        cin >> raceChoice;
    }

    // Player character initialization
    Character playerCharacter(playerName, classChoice, raceChoice);
    cout << "\nWelcome " << playerCharacter.GetName() << " [" << playerCharacter.GetClass() << "]." << endl;
    playerCharacter.ShowAttributes();
    cout << "Let's begin your adventure." << endl;
    WaitInput();

    cout << "It's been ages since you set foot in Ðromhell. But what would a simple adventurer like you do, if they saw that the king put a bounty on three traitors' head. By now, the wanted papers are all across the kingdom, and the news reached even your homeland, Tarwell. Since short on coin, you decided to travel to Ðromhell to hunt down these traitors yourself. By now, you know their faces from the papers, just like your palm. Ja'aden - an air genasi -, Volkmar - an aasimar necromancer, who is hunted by the Chant as well - and Gurwyn - a dragonborn from the noble house of Clethuntiallor, which is amongst the wealthiest families in the Far Lands.";
    WaitInput();
    cout << "The last thing that has been heard about them is that after they attacked the King's troops in Arden, they retreated to the elf's woods. Since then, the Ventruach - the alliance of the mages and elfs - have been raiding the villages and skirmishing the king's transport caravans. You are heading to the place of the last raided village, Bjol's Stone, to find out more.";
    WaitInput();
    

    //TODO Add other lines 
    DecideAction();

    Sleep(3000);
    
}



