#pragma once
#include "Userdata.h"
#include "Keys.h"
#include <string>
#include <array>
enum class WormState
{
	Iddle, Walking, Jumping
};

typedef struct
{
	double X;
	double Y;
}Point;

class Worm
{
public:
	Worm(const Userdata& Userdata);
	~Worm();
	void moveLeft();
	void moveRight();
	void Jump();
	void Draw();
	void Refresh();
private:
	std::array<ALLEGRO_BITMAP*, 15> walkImgs;
	std::array<ALLEGRO_BITMAP*,10> jumpImgs;
	Point Position;
	WormState State;
	unsigned int tickCount;
};

