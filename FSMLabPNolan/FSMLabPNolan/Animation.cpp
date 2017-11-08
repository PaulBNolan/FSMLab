#pragma once
#include "Animation.h"
#include "Idle.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

//This constructor is used to set the first value for current
Animation::Animation()
{
	current = new Idle();
}


Animation::~Animation()
{
}
//The below functions are used to send the current to the state class virtual functions where they will be redirected based 
//on what the current is
void Animation::idle()
{
	current->idle(this);
}
void Animation::jumping()
{
	current->jumping(this);
}
void Animation::climbing()
{
	current->climbing(this);
}
void Animation::hammering()
{
	current->hammering(this);
}
void Animation::shovelling()
{
	current->shovelling(this);
}
void Animation::swordmanship()
{
	current->swordmanship(this);
}
void Animation::walking()
{
	current->walking(this);
}


//This function is used to determine the players choices
void Animation::choices()
{
	//This resets the option related int values
	options = 0;
	optionNo = 0;
	for (int index = 0; index < 7; index++)
	{
		stateOptionNos[index] = 0;
	}

	//This is the initial text presented asking the players to make a choice
	std::cout << "What action do you want to do next?" << std::endl;
	std::cout << "The options are:" << std::endl;

	//The heavy movement states are not connected to the states that make use of equipment

	//The below if situations represent the states that are connected to all of the other states
	if (CStates.Idle == false)
	{
		optionNo++;
		stateOptionNos[0] = optionNo;

		std::cout << optionNo << ":To sit on you ass doing nothing" << std::endl;
	}
	else
	{
		optionNo++;
		stateOptionNos[0] = optionNo;

		std::cout << optionNo << ":To continue sit on you ass doing nothing" << std::endl;
	}

	if (CStates.Walking == false)
	{
		optionNo++;
		stateOptionNos[1] = optionNo;

		std::cout << optionNo << ":To start walking" << std::endl;
	}
	else
	{
		optionNo++;
		stateOptionNos[1] = optionNo;

		std::cout << optionNo << ":To continue walking without considering you may be lost" << std::endl;
	}

	//This if situation is used to show the state options that represent heavy movement
	if (CStates.Hammering != true && CStates.Shoveling != true && CStates.Swordsmanship != true)
	{
		if (CStates.Climbing == false)
		{
			optionNo++;
			stateOptionNos[2] = optionNo;

			std::cout << optionNo << ":To start climbing" << std::endl;
		}
		else
		{
			optionNo++;
			stateOptionNos[2] = optionNo;

			std::cout << optionNo << ":To continue climbing and hope you dont fall off" << std::endl;
		}

		if (CStates.Jumping == false)
		{
			optionNo++;
			stateOptionNos[3] = optionNo;

			std::cout << optionNo << ":To start Jumping" << std::endl;
		}
		else
		{
			optionNo++;
			stateOptionNos[3] = optionNo;

			std::cout << optionNo << ":To continue Jumping like a fool" << std::endl;
		}
	}

	//This if situation is used to show the state options that represent equipment use
	if (CStates.Climbing != true && CStates.Jumping != true)
	{
		if (CStates.Hammering == false)
		{
			optionNo++;
			stateOptionNos[4] = optionNo;

			std::cout << optionNo << ":To start using your Hammer" << std::endl;
		}
		else
		{
			optionNo++;
			stateOptionNos[4] = optionNo;

			std::cout << optionNo << ":To continue using your hammer even though the thing your hammering may bread any second" << std::endl;
		}

		if (CStates.Shoveling == false)
		{
			optionNo++;
			stateOptionNos[5] = optionNo;

			std::cout << optionNo << ":To start digging." << std::endl;
		}
		else
		{
			optionNo++;
			stateOptionNos[5] = optionNo;

			std::cout << optionNo << ":To continue digging without considering you may not be able to get back up." << std::endl;
		}

		if (CStates.Swordsmanship == false)
		{
			optionNo++;
			stateOptionNos[6] = optionNo;

			std::cout << optionNo << ":To start swinging your sword." << std::endl;
		}
		else
		{
			optionNo++;
			stateOptionNos[6] = optionNo;

			std::cout << optionNo << ":To continue swinging your sword even though your target may not even deserve it" << std::endl;
		}

	}
	//This is the input for the options value
	std::cin >> options;
	//This while loop is used if an error is entered and to ensure a correct one is entered
	while (options > optionNo || options < 0)
	{
		std::cout << "---------------------------------------------------------" << std::endl;
		std::cout << "Please enter a valid option" << std::endl;
		std::cin >> options;
	}

	std::cout << "--------------------------------------------------------------" << std::endl;
	//This resets the struct values
	resetStruct();

	//The below if situations below are used to turn the corresponding struct value to true
	if (options == stateOptionNos[0])
	{
		CStates.Idle = true;
	}

	if (options == stateOptionNos[1])
	{
		CStates.Walking = true;
	}

	if (options == stateOptionNos[2])
	{
		CStates.Climbing = true;
	}

	if (options == stateOptionNos[3])
	{
		CStates.Jumping = true;
	}

	if (options == stateOptionNos[4])
	{
		CStates.Hammering = true;
	}

	if (options == stateOptionNos[5])
	{
		CStates.Shoveling = true;
	}

	if (options == stateOptionNos[6])
	{
		CStates.Swordsmanship = true;
	}
}
//This function is used to reset the struct values
void Animation::resetStruct()
{
	CStates.Jumping = false;
	CStates.Idle = false;
	CStates.Climbing = false;
	CStates.Swordsmanship = false;
	CStates.Shoveling = false;
	CStates.Walking = false;
	CStates.Hammering = false;
}

