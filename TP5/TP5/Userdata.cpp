#include "Userdata.h"

using namespace std;

Userdata::Userdata()
{
	for (int i = 0; i < 15; i++) {
		string string = str + to_string(i) + ng;    //Se inicializan los bitmaps de los worms
		this->WormWalk[i] = al_load_bitmap(string.c_str());
	}

	for (int i = 0; i < 10; i++) {
		string string = STR + to_string(i) + NG;
		this->WormJump[i] = al_load_bitmap(string.c_str());
	}
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
