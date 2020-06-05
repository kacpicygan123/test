#include <iostream>
#include "Controller.h"

void Controller::setModelName(std::string name)
{
	model.setName(name);
}

std::string Controller::getModelName() const
{
	return model.getName();
}

void Controller::displayName()
{
	view.displayNameInfo(model.getName());
}

void Controller::checkInputFromUser()
{
	switch (input.getInput())
	{
	case 1:
	{
		view.displayFirstOption();
		break;
	}
	case 2:
	{
		view.displaySecondOption();
		break;
	}
	default:
	{
		view.noOption();
		break;
	}
	}
}
