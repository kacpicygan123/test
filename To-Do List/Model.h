#pragma once
#include <iostream>

class Model
{
private:
	std::string taskName;
public:
	std::string getName() const;
	void setName(const std::string name);
};
