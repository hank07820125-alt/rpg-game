#include "Item.h"
#include <iostream>

using namespace std;

Item::Item()
{
    name = "None";
    type = "None";
    effectValue = 0;
    quantity = 0;
}

Item::Item(string n, string t, int e, int q)
{
    name = n;
    type = t;
    effectValue = e;
    quantity = q;
}

void Item::use()
{
    if(quantity > 0)
    {
        quantity--;
        cout << name << " used!" << endl;
    }
    else
    {
        cout << "No item left." << endl;
    }
}

void Item::showInfo()
{
    cout << name << " Type: " << type
         << " Effect: " << effectValue
         << " Quantity: " << quantity << endl;
}

bool Item::isAvailable()
{
    return quantity > 0;
}

string Item::getName()
{
    return name;
}

string Item::getType()
{
    return type;
}

int Item::getEffectValue()
{
    return effectValue;
}

int Item::getQuantity()
{
    return quantity;
}

void Item::addQuantity(int q)
{
    quantity += q;
}
