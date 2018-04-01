#include "Userdata.h"

using namespace std;

Userdata::Userdata()
{
	this->Background = NULL;
	this->Scene = NULL;
}


Userdata::~Userdata()
{
	for (int i = 0; i < 15; i++)
		al_destroy_bitmap(this->WormWalk[i]);

	for (int i = 0; i < 10; i++)
		al_destroy_bitmap(this->WormJump[i]);

	al_destroy_bitmap(this->Background);
	al_destroy_bitmap(this->Scene);
}

void Userdata::LoadWormImages() {
	string string;

	for (int i = 1; i < 16; i++) {
		string = str + to_string(i) + ng;    //Se inicializan los bitmaps de los worms
		this->WormWalk[i - 1] = al_load_bitmap(string.c_str());
	}

	for (int i = 1; i < 11; i++) {
		string = STR + to_string(i) + NG;
		this->WormJump[i - 1] = al_load_bitmap(string.c_str());
	}
}

void Userdata::LoadBackground() {
	ALLEGRO_DISPLAY* Display = al_get_current_display();
	this->Background = al_load_bitmap((this->Bpath).c_str());
	al_draw_bitmap(this->Background, al_get_display_width(Display), al_get_display_height(Display), NULL);
}

void Userdata::LoadSceneImage() {
	ALLEGRO_DISPLAY* Display = al_get_current_display();
	this->Scene = al_load_bitmap((this->Spath).c_str());
	al_draw_bitmap(this->Scene, al_get_display_width(Display), al_get_display_height(Display), NULL);
}