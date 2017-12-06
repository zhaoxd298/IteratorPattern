#ifndef WAITRESS_H
#define WAITRESS_H

#include "Menu.h"
#include "Iterator.h"

#include <iostream>

namespace Iterator
{

using std::cout;
using std::endl;

class Waitress
{
private:
	Menu* m_pancakeHouseMenu;
	Menu* m_dinerMenu;
private:
	void printMenu(Iterator* iterator)
	{
		while (iterator->hasNext()) {
			iterator->next()->print();
		}
	}
public:
	Waitress(Menu* pancakeHouseMenu, Menu* dinerMenu)
	{
		m_pancakeHouseMenu = pancakeHouseMenu;
		m_dinerMenu = dinerMenu;
	}
	~Waitress()
	{}
	void printMenu()
	{
		Iterator *pancakeIterator = m_pancakeHouseMenu->createIterator();
		Iterator *dinerIterator = m_dinerMenu->createIterator();
		cout << "\nMenu\n========\nbreakfast:" << endl;
		printMenu(pancakeIterator);
		cout << "\nLunch:" << endl;
		printMenu(dinerIterator);

		delete pancakeIterator;
		delete dinerIterator;
	}

};	

}

#endif
