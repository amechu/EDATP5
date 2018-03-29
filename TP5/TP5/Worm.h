#pragma once
#include "Userdata.h"
#include "Keys.h"
#include <string>
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
	Worm(Key, Key, Key, const Userdata& Userdata);
	~Worm();
	void moveLeft();
	void moveRight();
	void Jump();
	void Draw();
	void Refresh();
private:
	ALLEGRO_BITMAP* walkImgs[15];
	ALLEGRO_BITMAP* jumpImgs[10];
	Point Position;
	WormState State;
	unsigned int tickCount;
};

