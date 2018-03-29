#pragma once

#include "Keys.h"

class Worm
{
public:
	Worm(Key, Key, Key);
	~Worm();
	void moveLeft();
	void moveRight();
	void Jump();
	void Draw();
};

