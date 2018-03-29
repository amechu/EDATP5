#pragma once
#include "Userdata.h"
#include "Worm.h"
#include "Keys.h"

class Scene
{
public:
	Scene();
	~Scene();
	void Draw(const Userdata&); //No necesita cambiar nada para dibujar
	void Refresh();
	void LoadWorm1(Key, Key, Key, const Userdata&);
	void LoadWorm2(Key, Key, Key, const Userdata&);

private:
	Worm* Worm1;
	Worm* Worm2;
};

