#include "Battle.h"
#include <iostream>

using namespace std;

void Battle::startBattle(Player &player, Monster &monster)
{
    cout << "\nA " << monster.getName() << " appears!" << endl;

    bool escaped = false;

    while(player.isAlive() && monster.isAlive() && !escaped)
    {
        cout << "\n===== Battle =====" << endl;
        player.showStatus();
        monster.showInfo();

        cout << "\n1. Attack" << endl;
        cout << "2. Skill" << endl;
        cout << "3. Item" << endl;
        cout << "4. Escape" << endl;
        cout << "Choose: ";

        int choice;
        cin >> choice;

        if(choice == 1)
        {
            int damage = player.attack();
            monster.takeDamage(damage);
        }
        else if(choice == 2)
        {
            int damage = player.useSkill();
            monster.takeDamage(damage);
        }
        else if(choice == 3)
        {
            player.useItem();
        }
        else if(choice == 4)
        {
            cout << "You escaped." << endl;
            escaped = true;
            break;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }

        if(monster.isAlive())
        {
            int damage = monster.attack();
            player.takeDamage(damage);
        }
    }

    if(player.isAlive() && !monster.isAlive())
    {
        cout << "\nYou defeated " << monster.getName() << "!" << endl;

        player.addGold(monster.getRewardGold());
        player.gainExp(monster.getRewardExp());

        cout << "Gold +" << monster.getRewardGold() << endl;
    }
}
