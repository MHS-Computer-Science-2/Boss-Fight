// Boss Fight.cpp
#include <iostream>
using namespace std;

class Boss {
public:
    string bossName;
    int bossDifficulty;
    int bossHealth;

    void basicAttack() {
        //subtracts 10 from boss health
        //displays amount of damage dealt
        bossHealth = bossHealth - 10;
        cout << "+10 damage to " << bossName << endl;
    }

    void specialAttack(int playerHealth) {
        //subtracts a random number between 5 and 15 from boss health
        //If playerHealth < 50, double the damage
        //Amount of damage dealt is printed to the screen

    }

    int attackPlayer() {
        //chooses a random number from 0-9 multiplied by boss's difficulty
        //displays the amount of attack damage
        //returns the damage dealt so it can be subtracted
        
        
        return 0; //This is here so the code runs, you will replace this line later in the lab.
    }
};


int main()
{
    srand(unsigned(time(0)));
    int playerHealth = 200;

    //Create a Boss object


    while (true) {
        //Menu choices an input
        cout << "1. Basic Attack" << endl;
        cout << "2. Special Attack" << endl;
        cout << "3. Heal" << endl;
        cout << "Enter your choice: " << endl;
        int choice;
        cin >> choice;

        //Act based on player choice
        if (choice == 1) {
            //Call basic attack on the boss
           
        }
        else if (choice == 2) {
            //Call special attack on the boss
          
        }
        else {
            //Add 25 to health
            playerHealth += 25;
        }

        //Call function to have the boss attack the player and subtract
        //the value returned from the player's health
        

        //If player or boss get to 0 health, tell who won and break the loop


        //Display the health of player and boss
        cout << "Player: " << playerHealth << endl;

        //Pause and clear the screen
        system("pause");
        system("cls");
    }

    system("pause");
}

