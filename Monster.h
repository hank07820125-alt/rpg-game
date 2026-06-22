#ifndef MONSTER_H
#define MONSTER_H

#include <string>

using namespace std;

class Monster
{
private:
    string name;
    int hp;
    int attackPower;
    int rewardGold;
    int rewardExp;

public:
    Monster();
    Monster(string n, int h, int atk, int gold, int exp);

    int attack();
    void takeDamage(int damage);
    bool isAlive();
    void showInfo();

    string getName();
    int getRewardGold();
    int getRewardExp();
};

#endif
