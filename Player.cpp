#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(string n)
{
    name = n;
    maxHp = 100;
    hp = maxHp;
    maxMp = 50;
    mp = maxMp;
    attackPower = 15;
    level = 1;
    exp = 0;
    gold = 50;

    items.push_back(Item("Potion", "HP", 30, 2));
    items.push_back(Item("Mana Potion", "MP", 20, 1));

    skills.push_back(Skill("Fireball", 30, 10));
    skills.push_back(Skill("Thunder", 45, 20));
}

int Player::attack()
{
    cout << name << " attacks!" << endl;
    return attackPower;
}

int Player::useSkill()
{
    showSkills();

    cout << "Choose skill: ";
    int choice;
    cin >> choice;

    if(choice < 1 || choice > skills.size())
    {
        cout << "Invalid skill." << endl;
        return 0;
    }

    Skill &skill = skills[choice - 1];

    if(mp < skill.getMpCost())
    {
        cout << "Not enough MP." << endl;
        return 0;
    }

    mp -= skill.getMpCost();
    skill.use();

    return skill.getDamage();
}

void Player::takeDamage(int damage)
{
    hp -= damage;

    if(hp < 0)
    {
        hp = 0;
    }
}

void Player::useItem()
{
    showItems();

    cout << "Choose item: ";
    int choice;
    cin >> choice;

    if(choice < 1 || choice > items.size())
    {
        cout << "Invalid item." << endl;
        return;
    }

    Item &item = items[choice - 1];

    if(!item.isAvailable())
    {
        cout << "This item is not available." << endl;
        return;
    }

    if(item.getType() == "HP")
    {
        heal(item.getEffectValue());
        item.use();
        cout << "HP recovered." << endl;
    }
    else if(item.getType() == "MP")
    {
        recoverMP(item.getEffectValue());
        item.use();
        cout << "MP recovered." << endl;
    }
}

bool Player::isAlive()
{
    return hp > 0;
}

void Player::heal(int value)
{
    hp += value;

    if(hp > maxHp)
    {
        hp = maxHp;
    }
}

void Player::recoverMP(int value)
{
    mp += value;

    if(mp > maxMp)
    {
        mp = maxMp;
    }
}

void Player::gainExp(int value)
{
    exp += value;
    cout << "EXP +" << value << endl;

    if(exp >= level * 100)
    {
        levelUp();
    }
}

void Player::levelUp()
{
    exp = 0;
    level++;

    maxHp += 20;
    maxMp += 10;
    attackPower += 5;

    hp = maxHp;
    mp = maxMp;

    cout << "\n===== LEVEL UP =====" << endl;
    cout << "Level: " << level << endl;
    cout << "Max HP +20, Max MP +10, Attack +5" << endl;
}

void Player::addGold(int value)
{
    gold += value;
}

bool Player::spendGold(int value)
{
    if(gold >= value)
    {
        gold -= value;
        return true;
    }

    cout << "Not enough gold." << endl;
    return false;
}

void Player::addItem(Item item)
{
    items.push_back(item);
}

void Player::showStatus()
{
    cout << "\n===== Player Status =====" << endl;
    cout << "Name: " << name << endl;
    cout << "Level: " << level << endl;
    cout << "HP: " << hp << "/" << maxHp << endl;
    cout << "MP: " << mp << "/" << maxMp << endl;
    cout << "Attack: " << attackPower << endl;
    cout << "EXP: " << exp << "/" << level * 100 << endl;
    cout << "Gold: " << gold << endl;
}

void Player::showItems()
{
    cout << "\n===== Items =====" << endl;

    for(int i = 0; i < items.size(); i++)
    {
        cout << i + 1 << ". ";
        items[i].showInfo();
    }
}

void Player::showSkills()
{
    cout << "\n===== Skills =====" << endl;

    for(int i = 0; i < skills.size(); i++)
    {
        cout << i + 1 << ". ";
        skills[i].showInfo();
    }
}

int Player::getGold()
{
    return gold;
}
