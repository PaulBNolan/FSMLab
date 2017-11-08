#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

//This struct is used in combination with the below class pointer to indicate which text is displayed
struct aStates
{
	bool Jumping = false;
	bool Idle = false;
	bool Climbing = false;
	bool Swordsmanship = false;
	bool Shoveling = false;
	bool Walking = false;
	bool Hammering = false;
};
class Animation
{
	//This pointer is used to indicate what specifc text is show in the command window
	class State*current;


public:
	Animation();
	~Animation();
	//This function is used to alter the state of the class point
	void setCurrent(State* s)
	{
		current = s;
	}
	//These functions send the class pointer to a virutal functions in the state header
	void idle();
	void jumping();
	void climbing();
	void hammering();
	void shovelling();
	void swordmanship();
	void walking();

	//This function allows the player to choose which action to take
	void choices();
	//This function resets the struct values after a choice is made
	void resetStruct();
	//This is the value representing the struct
	aStates CStates;

	//This value is used to help indicate what choice the player has made
	int options = 0;
	//This value is used to show the number of options the player has avaible to them and to make members of the 
	//below array to correspond with the option number they are displayed with
	int optionNo = 0;
	//This array represents the list of values the player must enter to change state
	int stateOptionNos[7] = { 0,0,0,0,0,0,0 };
};