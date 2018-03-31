#ifndef WORM_H
#define WORM_H

#include "Userdata.h"
#include <string>
#include <array>
#include <stlib.h>

#define SIZEPXLS_WORM 27

enum class WormState
{
	Iddle, Walking, Jumping
};

enum class WormDirection {
	Left, Right
};

typedef struct
{
	double X;
	double Y;
}Point;

class Worm
{
public:
	Worm(const Userdata& Userdata, unsigned int keySet);
	~Worm();
	void moveLeft();
	void moveRight();
	void Jump();
	void Draw(Userdata& Userdata);
	void Refresh();
private:
	Point Position;
	WormState State = WormState::Iddle;
	WormDirection Direction = WormDirection::Left;
	unsigned int tickCount;
	unsigned int jumpKey;
	unsigned int moveLeftKey;
	unsigned int moveRightKey;
};

#endif

