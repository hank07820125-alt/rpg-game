#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Item.h"
#include "Skill.h"

using namespace std;

class Player
{
private:
    string name;
    int hp;
    int maxHp;
    int mp;
    int maxMp;
    int attackPower;
    int level;
    int exp;
    int gold;
    vector<Item> items;
    vector<Skill> skills;

public:
    Player(string n);

    int attack();
    int useSkill();
    void takeDamage(int damage);
    void useItem();
    bool isAlive();

    void heal(int value);
    void recoverMP(int value);
    void gainExp(int value);
    void levelUp();

    void addGold(int value);
    bool spendGold(int value);
    void addItem(Item item);

    void showStatus();
    void showItems();
    void showSkills();

    int getGold();
};

#endif
