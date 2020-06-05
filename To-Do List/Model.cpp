#include <iostream>
#include "Model.h"

std::string Model::getName() const
{
	return taskName;
}

void Model::setName(std::string name)
{
	taskName = name;
}
