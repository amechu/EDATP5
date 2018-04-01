#ifndef ALLEGRO_CLASS_H
#define ALLEGRO_CLASS_H

#include <allegro5/allegro5.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include "Userdata.h"

#define BACKGROUND_MUSIC	"AoE.wav"
#define ACTUAL_FONT "Times_New_Roman_Normal.ttf"

class Allegro
{
public:
	Allegro();
	~Allegro();
	bool Init(Userdata&);


	ALLEGRO_TIMER* Timer;
	ALLEGRO_EVENT_QUEUE* Queue;
	ALLEGRO_DISPLAY* Display;
	ALLEGRO_SAMPLE * music;
	ALLEGRO_FONT * font;

	const float FPS = 50.0;
	const float SCREEN_W = 1920;
	const float SCREEN_H = 696;
};

#endif