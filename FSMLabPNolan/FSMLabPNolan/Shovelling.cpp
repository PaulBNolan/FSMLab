#include "Shovelling.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

Shovelling::Shovelling()
{
}


Shovelling::~Shovelling()
{
}
//The below functions are used to write the text and to alter the class pointer to the new state
void Shovelling::idle(Animation* a)
{
	std::cout << "The Knight stops digging and decides to take a break" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Shovelling::hammering(Animation* a)
{
	std::cout << "The Knight switches his shovel for his hammer." << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
void Shovelling::shovelling(Animation* a)
{
	std::cout << "The Knight keeps on digging." << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Shovelling::swordmanship(Animation* a)
{
	std::cout << "The Knight puts his shovel away and starts swinging his sword like a mad man." << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}
void Shovelling::walking(Animation* a)
{
	std::cout << "The Knight stops digging and goes for a stroll." << std::endl;
	a->setCurrent(new Walking());
	delete this;
}