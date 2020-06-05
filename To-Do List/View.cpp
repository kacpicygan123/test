#include <iostream>
#include "View.h"

void View::displayNameInfo(std::string taskName)
{
	std::cout << "Nazwa zadania: " << taskName << "\n";
}
void View::displayFirstOption()
{
	std::cout << "Displaying first option. \n";
}
void View::displaySecondOption()
{
	std::cout << "Displaying second option. \n";
}
void View::noOption()
{
	std::cout << "Sorry, there's no option specified in program. \n";
}