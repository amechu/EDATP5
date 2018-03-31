#pragma once
#include "Keys.h"
#include "allegro5\allegro.h"
#include "allegro5\allegro_image.h"
#include <string>
#include <array>

class Userdata
{
public:
	Userdata();
	~Userdata();
	std::array<ALLEGRO_BITMAP*, 15> WormWalk;
	std::array<ALLEGRO_BITMAP*, 10> WormJump;
	std::string str = "wwalk-F";
	std::string ng = ".png";
	std::string STR = "wjump-F";
	std::string NG = ".png";

	//Worm 1 keys
	
	Key Worm1J = Key::W;
	Key Worm1L = Key::A;
	Key Worm1R = Key::D;

	//Worm 2 keys
	Key Worm2J = Key::Up;
	Key Worm2L = Key::Left;
	Key Worm2R = Key::Right;
};

