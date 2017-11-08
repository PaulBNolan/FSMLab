#include "Climbing.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

Climbing::Climbing()
{
}

Climbing::~Climbing()
{
}
//The below functions are used to write the text and to alter the class pointer to the new state
void Climbing::idle(Animation* a)
{
	std::cout << "Going from Climbing to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "The Knight Jumps off of what he is climbing." << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Climbing::climbing(Animation* a)
{
	std::cout << "The Knight Keeps on climbing not knowing when he will stop." << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Climbing::walking(Animation* a)
{
	std::cout << "The reaches the top of what he is climbing and goes for a walk." << std::endl;
	a->setCurrent(new Walking());
	delete this;
}