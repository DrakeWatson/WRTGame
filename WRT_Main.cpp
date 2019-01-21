// The main function of the program, where the game will be started from.
#include <iostream>
#include "WRT_Menu.hpp"
using std::cout;
using std::cin;
using std::endl;
bool start_game()
{
	int response;
	cout << "Do you want to start the game? \n (1 -> Yes || 2 -> No)" << endl;
	cin >> response;
	if(response == 1)
	return true;
	
	else return false;
}
int main()
{	
	//Game loop to keep the game running.
	while(start_game())
	{
	cout << "The game is running." << endl;
	}	
	
	Menu newMenu("Test.");
	cout << "1" << endl;
	Menu *newPoint = &newMenu;
	cout << "2" << endl;
	Menu superMenu("Billy Joe.");
	Menu *superPoint = &superMenu;
	cout << "3" << endl;
	newMenu.addMenu(superPoint);
	cout << "4" << endl;
	superMenu.addMenu(superPoint);
	
	cout << superMenu.getNameOfMenu() << endl << superMenu.getNumOfOptions() << endl;




}

