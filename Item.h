#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item
{
private:
    string name;
    string type;
    int effectValue;
    int quantity;

public:
    Item();
    Item(string n, string t, int e, int q);

    void use();
    void showInfo();
    bool isAvailable();

    string getName();
    string getType();
    int getEffectValue();
    int getQuantity();
    void addQuantity(int q);
};

#endif
