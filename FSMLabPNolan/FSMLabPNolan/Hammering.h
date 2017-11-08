#pragma once
#include "State.h"
#include "Animation.h"
#include "Idle.h"
#include "Shovelling.h"
#include "Swordsmanship.h"
#include "Walking.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Hammering : public State
{
public:
	Hammering();
	~Hammering();
	//This function reprsents one of the intial states
	void idle(Animation* a);
	//These are the functions representing states that were added on later
	void hammering(Animation* a);
	void shovelling(Animation* a);
	void swordmanship(Animation* a);
	void walking(Animation* a);
};