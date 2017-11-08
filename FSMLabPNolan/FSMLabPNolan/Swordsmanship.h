#pragma once
#include "State.h"
#include "Animation.h"
#include "Idle.h"
#include "Hammering.h"
#include "Shovelling.h"
#include "Walking.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Swordsmanship : public State
{
public:
	Swordsmanship();
	~Swordsmanship();
	//This function represents of the initial states
	void idle(Animation* a);
	//These are the functions representing the states added on later
	void hammering(Animation* a);
	void shovelling(Animation* a);
	void swordmanship(Animation* a);
	void walking(Animation* a);
};