#pragma once
#include "State.h"
#include "Animation.h"
#include "Idle.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	//These are the functions representing the intial states
	void idle(Animation* a);
	void climbing(Animation* a);
	void jumping(Animation* a);
	//This function represents one of the later states
	void walking(Animation* a);
};