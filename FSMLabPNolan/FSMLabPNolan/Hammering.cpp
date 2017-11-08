#include "Hammering.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

Hammering::Hammering()
{
}


Hammering::~Hammering()
{
}
//The below functions are used to write the text and to alter the class pointer to the new state
void Hammering::idle(Animation* a)
{
	std::cout << "The Knight stops using his hammer and takes a rest." << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Hammering::hammering(Animation* a)
{
	std::cout << "The Knight continues using his hammer." << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
void Hammering::shovelling(Animation* a)
{
	std::cout << "The Knight switches his hammer with his shovel." << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Hammering::swordmanship(Animation* a)
{
	std::cout << "The Knight decides his sword is better suited then his hammer for fighting." << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}
void Hammering::walking(Animation* a)
{
	std::cout << "The Knight stops hammering the object and decides to go for a walk." << std::endl;
	a->setCurrent(new Walking());
	delete this;
}