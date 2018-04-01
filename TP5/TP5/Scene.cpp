#include "Scene.h"


Scene::Scene()
{
}


Scene::~Scene()
{
	delete Worm1;
	delete Worm2;
}


void Scene::Draw(const Userdata& Userdata, Allegro& allegro) {

	al_clear_to_color(al_map_rgb(50, 50, 50));
	al_draw_bitmap(Userdata.WindowsBackground, 0, 0, NULL);
	al_draw_bitmap(Userdata.Background, 0, 0, NULL);
	al_flip_display();

}


void Scene::Refresh(const Userdata& Userdata, Allegro& allegro) {

		this->Draw(Userdata,allegro);
		Worm1->Draw(Userdata);
		Worm2->Draw(Userdata);

}


void Scene::LoadWorm1(const Userdata& Userdata, unsigned int keySet) {
	this->Worm1 = new Worm(Userdata, keySet);
}


void Scene::LoadWorm2(const Userdata& Userdata, unsigned int keySet) {
	this->Worm2 = new Worm(Userdata, keySet);
}





