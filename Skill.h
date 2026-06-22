#ifndef SKILL_H
#define SKILL_H

#include <string>

using namespace std;

class Skill
{
private:
    string name;
    int damage;
    int mpCost;

public:
    Skill();
    Skill(string n, int d, int mp);

    void use();
    void showInfo();
    int getDamage();
    int getMpCost();
    string getName();
};

#endif
