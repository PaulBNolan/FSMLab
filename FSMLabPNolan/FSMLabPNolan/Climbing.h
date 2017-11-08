#pragma once
#include "State.h"
#include "Animation.h"
#include "Idle.h"
#include "Jumping.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Climbing : public State
{
public:
	Climbing();
	~Climbing();
	//These are the functions representing the intial states
	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	//This function represents the a state added on later
	void walking(Animation* a);
};