#include "Skill.h"
#include <iostream>

using namespace std;

Skill::Skill()
{
    name = "None";
    damage = 0;
    mpCost = 0;
}

Skill::Skill(string n, int d, int mp)
{
    name = n;
    damage = d;
    mpCost = mp;
}

void Skill::use()
{
    cout << name << " used!" << endl;
}

void Skill::showInfo()
{
    cout << name << " Damage: " << damage
         << " MP Cost: " << mpCost << endl;
}

int Skill::getDamage()
{
    return damage;
}

int Skill::getMpCost()
{
    return mpCost;
}

string Skill::getName()
{
    return name;
}
