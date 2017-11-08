#include "Jumping.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}
//The below functions are used to write the text and to alter the class pointer to the new state
void Jumping::idle(Animation* a)
{
	std::cout << "The Knight stops jumping to take a rest" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::climbing(Animation* a)
{
	std::cout << "The Knight jumps on to a cliff and starts climbing." << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Jumping::jumping(Animation* a)
{
	std::cout << "Agaisnt his better Judgement the Knight keeps on Jumping." << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Jumping::walking(Animation* a)
{
	std::cout << "The Knight stops Jumping and decides to go for a stroll." << std::endl;
	a->setCurrent(new Walking());
	delete this;
}