#pragma once
#include "State.h"
#include "Animation.h"
#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Hammering.h"
#include "Shovelling.h"
#include "Swordsmanship.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Walking : public State
{
public:
	Walking();
	~Walking();
	//These are the functions representing the intial states
	void jumping(Animation* a);
	void climbing(Animation* a);
	void idle(Animation* a);
	//These are the functions representing the states added on later
	void hammering(Animation* a);
	void shovelling(Animation* a);
	void swordmanship(Animation* a);
	void walking(Animation* a);
};

