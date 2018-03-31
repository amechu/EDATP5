#include "Initialization.h"

bool Initialization(Userdata& Userdata, Allegro& Allegro, Scene& Scene)
{
	bool control=true;

	control=Allegro.Init(Userdata); //Inicializo Allegro

	control=Userdata.LoadWormImages();

	Scene.LoadWorm1(Userdata, 1); //Worm inicializado con keyset 1
	Scene.LoadWorm2(Userdata, 2); //Worm inicializado con keyset 2

	Scene.Worm1->Draw(Userdata); //DEBUG

	return control;

}