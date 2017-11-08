#pragma once
#include "State.h"
#include "Animation.h"
#include "Idle.h"
#include "Hammering.h"
#include "Swordsmanship.h"
#include "Walking.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Shovelling : public State
{
public:
	Shovelling();
	~Shovelling();
	//This function represents one of the initial states
	void idle(Animation* a);
	//These are the functions representing states added on later
	void hammering(Animation* a);
	void shovelling(Animation* a);
	void swordmanship(Animation* a);
	void walking(Animation* a);
};