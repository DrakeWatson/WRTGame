#include "WRT_Menu.hpp"
#include<iostream>
using std::cout;
using std::endl;

Menu::Menu(Menu *optionsIn, int size, string name)
{
	nameOfMenu = name;
	options = new Menu[size]; 
	for(int i = 0; i < numOfOptions; i++) //Set options equal to the array of menus being entered into the constructor.
	{
		options[i] = optionsIn[i];
	}
	numOfOptions = size;
}
Menu::Menu(string name)
{
	nameOfMenu = name;
	options = new Menu[0];
	numOfOptions = 0;
}

Menu::Menu()
{
	nameOfMenu = "";
	options = new Menu[0];
	numOfOptions = 0;
}
Menu::Menu(const Menu& oldMenu)
{
	nameOfMenu = oldMenu.getNameOfMenu();
	options = new Menu[oldMenu.getNumOfOptions()];
	for(int i = 0; i < numOfOptions; i++)
	{
		options[i] = oldMenu.getOptions()[i];
	}
	numOfOptions = oldMenu.getNumOfOptions();
}
Menu& Menu::operator=(const Menu& oldMenu)
{
	nameOfMenu = oldMenu.getNameOfMenu();
	delete options;
	options = new Menu[oldMenu.getNumOfOptions()];
	for(int i = 0; i < numOfOptions; i++) 
	{
		options[i] = oldMenu.getOptions()[i];
	}
	numOfOptions = oldMenu.getNumOfOptions();
}	

Menu::~Menu()
{
	delete options;
}

int Menu::getNumOfOptions() const
{
	return numOfOptions;
}

string Menu::getNameOfMenu() const
{
	return nameOfMenu;
}
Menu* Menu::getOptions() const
{
	return options;
}

void Menu::addMenu(Menu *newMenu) //Links a new menu to this menu.
{	
	Menu* temp;	
	if(numOfOptions == 0) //Make sure the options array is not null. 
	{
		cout << "Helloooooo" << endl;
		Menu *temp = new Menu[1];
	}
	else
	{
		Menu *temp = new Menu[numOfOptions + 1]; //If its not null, create a new temp array which is one larger.
	}	
	cout << "Hello!" << endl;
	for(int i = 0; i < numOfOptions; i++) //Set all of the values in the temp array equal to the ones in options.
	{
		temp[i] = options[i];
	}
	cout << "Hello2" << endl;
	temp[numOfOptions] = newMenu; //Add the new menu link.
	cout << "Hello3" << endl;
	delete options; //Get rid of the old data.
	cout << "Hello4" << endl;
	numOfOptions++;
	options = temp;//Update options.
	cout << "Hello5" << endl;
}

