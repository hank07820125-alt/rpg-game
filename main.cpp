#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Battle.h"
#include "Shop.h"

using namespace std;

int main()
{
    cout << "===== Text RPG Game =====" << endl;

    string name;
    cout << "Enter your name: ";
    cin >> name;

    Player player(name);
    Battle battle;
    Shop shop;

    bool running = true;

    while(running && player.isAlive())
    {
        cout << "\n===== Main Menu =====" << endl;
        cout << "1. Show status" << endl;
        cout << "2. Go to shop" << endl;
        cout << "3. Fight Slime" << endl;
        cout << "4. Fight Goblin" << endl;
        cout << "5. Fight Boss" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose: ";

        int choice;
        cin >> choice;

        if(choice == 1)
        {
            player.showStatus();
        }
        else if(choice == 2)
        {
            shop.openShop(player);
        }
        else if(choice == 3)
        {
            Monster slime("Slime", 60, 10, 20, 30);
            battle.startBattle(player, slime);
        }
        else if(choice == 4)
        {
            Monster goblin("Goblin", 100, 18, 40, 50);
            battle.startBattle(player, goblin);
        }
        else if(choice == 5)
        {
            Monster boss("Ancient Dragon", 250, 35, 120, 150);
            battle.startBattle(player, boss);

            if(player.isAlive() && !boss.isAlive())
            {
                cout << "\n===== GAME CLEAR =====" << endl;
                cout << "You defeated the Ancient Dragon!" << endl;
                running = false;
            }
        }
        else if(choice == 0)
        {
            cout << "Game ended." << endl;
            running = false;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }

    if(!player.isAlive())
    {
        cout << "\nGame Over." << endl;
    }

    return 0;
}
