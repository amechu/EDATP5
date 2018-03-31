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
	void LoadWorm1(const Userdata&);
	void LoadWorm2(const Userdata&);
	Worm* Worm1;
	Worm* Worm2;
};

