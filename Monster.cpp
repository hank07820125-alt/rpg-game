#include "Monster.h"
#include <iostream>

using namespace std;

Monster::Monster()
{
    name = "Monster";
    hp = 50;
    attackPower = 10;
    rewardGold = 10;
    rewardExp = 10;
}

Monster::Monster(string n, int h, int atk, int gold, int exp)
{
    name = n;
    hp = h;
    attackPower = atk;
    rewardGold = gold;
    rewardExp = exp;
}

int Monster::attack()
{
    cout << name << " attacks!" << endl;
    return attackPower;
}

void Monster::takeDamage(int damage)
{
    hp -= damage;

    if(hp < 0)
    {
        hp = 0;
    }
}

bool Monster::isAlive()
{
    return hp > 0;
}

void Monster::showInfo()
{
    cout << "Monster: " << name
         << " HP: " << hp
         << " Attack: " << attackPower << endl;
}

string Monster::getName()
{
    return name;
}

int Monster::getRewardGold()
{
    return rewardGold;
}

int Monster::getRewardExp()
{
    return rewardExp;
}
