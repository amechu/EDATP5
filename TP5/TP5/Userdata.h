#pragma once
#include "allegro5\allegro.h"
#include "allegro5\allegro_image.h"
#include <string>

class Userdata
{
public:
	Userdata();
	~Userdata();
	ALLEGRO_BITMAP* WormWalk[15];
	ALLEGRO_BITMAP* WormJump[10];
	std::string str = "wwalk-F";
	std::string ng = ".png";
};

