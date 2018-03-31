#include "Userdata.h"

using namespace std;

Userdata::Userdata()
{
}



Userdata::~Userdata()
{
	for (int i = 0; i < 15; i++) {
		al_destroy_bitmap(this->WormWalk[i]);
	}

	for (int i = 0; i < 10; i++) {
		al_destroy_bitmap(this->WormJump[i]);
	}
}

bool Userdata::LoadWormImages() {
	string string;
	bool control = true;

	for (int i = 1; i < 16; i++) {
		string = str + to_string(i) + ng;    //Se inicializan los bitmaps de los worms
		this->WormWalk[i - 1] = al_load_bitmap(string.c_str());

		if (this->WormWalk[i - 1] == NULL) //Me fijo que no haya habido un error al cargar los bitmaps
		{
			control = false;
			break;
			std::cout << "WormWalk Bitmaps not loaded properly." << std::endl;
		}

	}

	for (int i = 1; i < 11; i++) {
		string = STR + to_string(i) + NG;
		this->WormJump[i - 1] = al_load_bitmap(string.c_str());

		if (this->WormJump[i - 1] == NULL) //Me fijo que no haya habido un error al cargar los bitmaps
		{
			control = false;
			break;
			std::cout << "WormJump Bitmaps not loaded properly." << std::endl;
		}
	}

	return control;

}
