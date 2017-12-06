#ifndef MENU_H
#define MENU_H

#include "Iterator.h"

namespace Iterator
{

class Menu
{
public:
    Menu(){}
    virtual ~Menu(){}
    virtual Iterator* createIterator() = 0;
};
}

#endif

