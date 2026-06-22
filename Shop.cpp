#include "Shop.h"
#include <iostream>

using namespace std;

void Shop::openShop(Player &player)
{
    bool shopping = true;

    while(shopping)
    {
        cout << "\n===== Shop =====" << endl;
        cout << "Gold: " << player.getGold() << endl;
        cout << "1. Potion (30G)" << endl;
        cout << "2. Mana Potion (40G)" << endl;
        cout << "0. Leave shop" << endl;
        cout << "Choose: ";

        int choice;
        cin >> choice;

        if(choice == 1)
        {
            if(player.spendGold(30))
            {
                player.addItem(Item("Potion", "HP", 30, 1));
                cout << "You bought a Potion." << endl;
            }
        }
        else if(choice == 2)
        {
            if(player.spendGold(40))
            {
                player.addItem(Item("Mana Potion", "MP", 20, 1));
                cout << "You bought a Mana Potion." << endl;
            }
        }
        else if(choice == 0)
        {
            shopping = false;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }
}
