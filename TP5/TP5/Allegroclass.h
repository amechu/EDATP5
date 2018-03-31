#ifndef ALLEGRO_CLASS_H
#define ALLEGRO_CLASS_H

#include "allegro5\allegro.h"
#include "allegro5\allegro_image.h"
#include <allegro5/allegro_audio.h>
#include "Userdata.h"

#define BITMAP_SCENARIO  "Scenario.png"
#define BITMAP_WINDOWS  "WindowsXP.png"
#define BACKGROUND_MUSIC	"AoE.wav"

class Allegro
{
public:
	Allegro();
	~Allegro();
	bool Init(Userdata&);
	void SetBackground();


	ALLEGRO_TIMER* Timer;
	ALLEGRO_EVENT_QUEUE* Queue;
	ALLEGRO_BITMAP *Background;
	ALLEGRO_BITMAP *WindowsBackground;
	ALLEGRO_DISPLAY* Display;
	ALLEGRO_SAMPLE * music;

	const float FPS = 50.0;
	const float SCREEN_W = 1920;
	const float SCREEN_H = 696;
};

#endif