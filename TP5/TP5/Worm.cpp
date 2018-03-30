#include "Worm.h"
using namespace std;

Worm::Worm(Key, Key, Key, const Userdata& Userdata)
{
	for (int i = 0; i < 15; i++) {
		string string = Userdata.str + to_string(i) + Userdata.ng;    //Se inicializan los bitmaps de los worms
		walkImgs[i] = al_load_bitmap(string.c_str());
	}

	for (int i = 0; i < 10; i++) {
		string string = Userdata.str + to_string(i) + Userdata.ng; 
		jumpImgs[i] = al_load_bitmap(string.c_str());
	}
}


Worm::~Worm()
{
}


void Worm::moveLeft() {

}


void Worm::moveRight() {

}


void Worm::Jump() {

}


void Worm::Draw() {

}


void Worm::Refresh() {

}