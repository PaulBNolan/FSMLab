#include "Idle.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

Idle::Idle()
{
}


Idle::~Idle()
{
}
//The below functions are used to write the text and to alter the class pointer to the new state
void Idle::jumping(Animation* a)
{
	std::cout << "The Knight starts jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "The Knight starts climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Idle::idle(Animation* a)
{
	std::cout << "The Knight keeps on idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::hammering(Animation* a)
{
	std::cout << "The Knight starts using his hammer." << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
void Idle::shovelling(Animation* a)
{
	std::cout << "The Knight starts using his Shovel." << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Idle::swordmanship(Animation* a)
{
	std::cout << "The Knight starts swinging his sword." << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}
void Idle::walking(Animation* a)
{
	std::cout << "The Knight goes for a walk." << std::endl;
	a->setCurrent(new Walking());
	delete this;
}