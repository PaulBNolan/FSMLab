#pragma once
#include "Animation.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class State
{
public:
	State();
	~State();

	//The below functions are virtual ones which indicates which text is to be displayed
	//The class each one goes to is based on the class pointer
	virtual void idle(Animation* a)
	{
		std::cout << "State::Idling" << std::endl;
	}
	virtual void jumping(Animation* a)
	{
		std::cout << "State::Jumping" << std::endl;
	}
	virtual void climbing(Animation* a)
	{
		std::cout << "State::Climbing" << std::endl;
	}
	virtual void hammering(Animation* a)
	{
		std::cout << "State::Hammering" << std::endl;
	}
	virtual void shovelling(Animation* a)
	{
		std::cout << "State::Shovelling" << std::endl;
	}
	virtual void swordmanship(Animation* a)
	{
		std::cout << "State::Swordmanship" << std::endl;
	}
	virtual void walking(Animation* a)
	{
		std::cout << "State::Walking" << std::endl;
	}
};
