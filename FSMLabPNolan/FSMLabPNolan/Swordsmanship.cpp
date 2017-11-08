#include "Swordsmanship.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

Swordsmanship::Swordsmanship()
{
}


Swordsmanship::~Swordsmanship()
{
}
//The below functions are used to write the text and to alter the class pointer to the new state
void Swordsmanship::idle(Animation* a)
{
	std::cout << "The Knight stops swinging his swords and decides to take a break" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Swordsmanship::hammering(Animation* a)
{
	std::cout << "The Knight decides using his hammer would be a better idea then just killing the man with his hammer." << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
void Swordsmanship::shovelling(Animation* a)
{
	std::cout << "The Knight decides his time is better spent digging with his shovel then swinging his sword." << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Swordsmanship::swordmanship(Animation* a)
{
	std::cout << "The Knight keeps on swinging his sword like a mad man." << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}
void Swordsmanship::walking(Animation* a)
{
	std::cout << "The Knight stops swinging his sword and goes for a stroll to clear his head." << std::endl;
	a->setCurrent(new Walking());
	delete this;
}