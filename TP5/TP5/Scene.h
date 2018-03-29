#pragma once
#include "Userdata.h"
#include "Worm.h"

class Scene
{
public:
	Scene();
	~Scene();
	void Draw(const Userdata&); //No necesita cambiar nada para dibujar
	void LoadWorm1(/*teclas*/);
	void LoadWorm2(/*teclas*/);

private:
	Worm* Worm1;
	Worm* Worm2;
};

