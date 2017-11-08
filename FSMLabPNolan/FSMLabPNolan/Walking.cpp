#include "Walking.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

Walking::Walking()
{
}


Walking::~Walking()
{
}
//The below functions are used to write the text and to alter the class pointer to the new state
void Walking::jumping(Animation* a)
{
	std::cout << "The Knight decides to make things interesting and starts hopping like a rabbit." << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Walking::climbing(Animation* a)
{
	std::cout << "The Knight walks towards a object and decides to climb it." << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Walking::idle(Animation* a)
{
	std::cout << "The Knight stops walking and decides to take a break" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Walking::hammering(Animation* a)
{
	std::cout << "The Knight takes a break from hammering and goes for a stroll." << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
void Walking::shovelling(Animation* a)
{
	std::cout << "The Knight takes a break from digging and goes for a walk." << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Walking::swordmanship(Animation* a)
{
	std::cout << "The Knight puts his sword away and decides to go for a walk." << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}
void Walking::walking(Animation* a)
{
	std::cout << "The Knight decides to continue his stroll." << std::endl;
	a->setCurrent(new Walking());
	delete this;
}