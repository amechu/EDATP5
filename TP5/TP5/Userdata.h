#pragma once
#include "allegro5\allegro.h"
#include "allegro5\allegro_image.h"
#include <string>
#include <array>

enum {Jump, Left, Right, TotalActions};

class Userdata
{
public:
	Userdata();
	~Userdata();
	void LoadWormImages();
	void LoadBackground();
	void LoadSceneImage();

	ALLEGRO_BITMAP *Background;
	const std::string Bpath = "WindowsXP.jpg";
	
	ALLEGRO_BITMAP *Scene;
	const std::string Spath = "Scenario.png";

	std::array<ALLEGRO_BITMAP*, 15> WormWalk; //Worm walk bitmaps
	std::array<ALLEGRO_BITMAP*, 10> WormJump; //Worm jump bitmaps
	const std::string str = "wwalk-F";
	const std::string ng = ".png";
	const std::string STR = "wjump-F";
	const std::string NG = ".png";

	//Worm 1 keys
	unsigned int worm1KeySet[TotalActions] = { ALLEGRO_KEY_W, ALLEGRO_KEY_A, ALLEGRO_KEY_D };

	//Worm 2 keys
	unsigned int worm2KeySet[TotalActions] = { ALLEGRO_KEY_UP, ALLEGRO_KEY_LEFT, ALLEGRO_KEY_RIGHT };
};

