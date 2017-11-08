/// <summary>
/// @mainpage FSML Lab
/// @Author: Paul Nolan
/// @Version 2.0
/// 
/// Project Summary:A program displaying and simulating a finite state machine
/// 
/// Dates and Time of sessions: 
/// 06/11/17 6:00 1hr
/// 07/11/17 6:00 2hr
/// 08/11/17 1:00 6hr
/// 
/// Total
/// </summary>

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

#include "Animation.h"
#include <string>
#include <time.h>

sf::RenderWindow window(sf::VideoMode(800, 800), "FSM Lab");
//Function used to draw the text and sprite
void render();
//The text used to display the current state that is occuring on the window
sf::Text message;
sf::Font m_font;
//The texture and sprite used to display a image representing what state is occuring
sf::Texture m_texture;
sf::Sprite m_sprite;

int main()
{
	
	//The animation object used to help show what specfic text must be shown
	Animation fsm;
	//The loading of the font from the project file
	if (!m_font.loadFromFile("arial_narrow_7/arial_narrow_7.ttf"))
	{
		std::cout << " error... " << std::endl;
	}
	//Setting up the base text stats
	message.setCharacterSize(40);
	message.setPosition(300, 0);
	message.setFillColor(sf::Color::White);
	message.setFont(m_font);
	//The loading of the initial sprite
	if (!m_texture.loadFromFile("KnightSprite.png"))
	{
		std::cout << "Error" << std::endl;
	}
	//The setting of the position of the sprite and setting the texture to it
	m_sprite.setPosition(250, 250);
	m_sprite.setTexture(m_texture);

	while (true)
	{
		//Function is used to allow the player to choose what path they want to take
		fsm.choices();

		//All of the below If situations do the following. They use the animation object
		//to find which line of text must be displayed in the command window. Additionally 
		//They alter the text and image displayed to match the new state.
		if (fsm.CStates.Jumping == true)
		{
			fsm.jumping();
			message.setString("State:Jumping");

			if (!m_texture.loadFromFile("KnightJumping.png"))
			{
				std::cout << "Error" << std::endl;
			}
			m_sprite.setTexture(m_texture);
		}

		if (fsm.CStates.Climbing == true)
		{
			fsm.climbing();
			message.setString("State:Climbing");

			if (!m_texture.loadFromFile("KnightClimbing.jpg"))
			{
				std::cout << "Error" << std::endl;
			}
			m_sprite.setTexture(m_texture);
		}

		if (fsm.CStates.Idle == true)
		{
			fsm.idle();
			message.setString("State:Idle");

			if (!m_texture.loadFromFile("KnightResting.jpg"))
			{
				std::cout << "Error" << std::endl;
			}
			m_sprite.setTexture(m_texture);
		}

		if (fsm.CStates.Hammering == true)
		{
			fsm.hammering();
			message.setString("State:Hammering");

			if (!m_texture.loadFromFile("KnightHammer.jpg"))
			{
				std::cout << "Error" << std::endl;
			}
			m_sprite.setTexture(m_texture);
		}

		if (fsm.CStates.Shoveling == true)
		{
			fsm.shovelling();
			message.setString("StateShoveling");

			if (!m_texture.loadFromFile("KnightDigging.png"))
			{
				std::cout << "Error" << std::endl;
			}
			m_sprite.setTexture(m_texture);
		}

		if (fsm.CStates.Swordsmanship == true)
		{
			fsm.swordmanship();
			message.setString("State:Swordmanship");

			if (!m_texture.loadFromFile("KnightSwinging.png"))
			{
				std::cout << "Error" << std::endl;
			}
			m_sprite.setTexture(m_texture);
		}

		if (fsm.CStates.Walking == true)
		{
			fsm.walking();
			message.setString("State:Walking");

			if (!m_texture.loadFromFile("KnightWalking.jpg"))
			{
				std::cout << "Error" << std::endl;
			}
			m_sprite.setTexture(m_texture);
		}

		render();
	}
}
//Function used to render the images and text
void render()
{
	window.clear();
	window.draw(message);
	window.draw(m_sprite);
	window.display();
}