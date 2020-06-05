#pragma once
#include <iostream>
#include "Model.h"
#include "View.h"
#include "Input.h"

class Controller
{
private:
	Model model;
	View view;
	Input input;
public:
	Controller(Model model, View view, Input input) : model{ model }, view{ view }, input{ input } {};
	void setModelName(std::string name);
	std::string getModelName() const;
	void checkInputFromUser();
	void displayName();

};