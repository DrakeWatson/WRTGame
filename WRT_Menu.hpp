#ifndef WRT_MENU
#define WRT_MENU
// The menu class will contain the structure for how each menu will be displayed and used by the user.
#include <string>

using std::string;

class Menu
{
	private:
	int numOfOptions;
	Menu *options;
	string nameOfMenu;
	

	public:
	Menu(Menu*,int, string);
	Menu(string);
	Menu(const Menu&);
	Menu();
	~Menu();
	Menu& operator=(const Menu&);
	int getNumOfOptions() const;
	string getNameOfMenu() const;
	Menu* getOptions() const;
	void addMenu(Menu*);
	

};
#endif
