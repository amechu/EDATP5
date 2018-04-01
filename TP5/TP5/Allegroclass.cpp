#include "Allegroclass.h"

Allegro::Allegro()
{
	this->Timer = NULL;
	this->Background = NULL;
	this->WindowsBackground = NULL;
	this->Queue = NULL;
	this->Display = NULL;
	this->font = NULL;
}


Allegro::~Allegro()
{
	al_destroy_sample(this->music);
	al_destroy_bitmap(this->Background);
	al_destroy_bitmap(this->WindowsBackground);
	al_destroy_display(this->Display);
	al_destroy_timer(this->Timer);
	al_destroy_event_queue(this->Queue);
}


bool Allegro::Init(Userdata& Userdata) {

	bool ret = false;

	if (al_init()) {
		if (al_init_image_addon()) {
			if (al_install_keyboard()) {
				if (al_install_audio()) {
					if (al_init_font_addon()){
						if (al_init_ttf_addon()){
							if (this->Display = al_create_display(this->SCREEN_W, this->SCREEN_H)) {
								if (this->Timer = al_create_timer(1 / this->FPS)) {
									if (this->Background = al_create_bitmap(this->SCREEN_W, this->SCREEN_H)) {
										if (this->Queue = al_create_event_queue()) {
											if ((Background = al_load_bitmap(BITMAP_SCENARIO)) && (WindowsBackground = al_load_bitmap(BITMAP_WINDOWS))) {
												if (music = al_load_sample(BACKGROUND_MUSIC)) {
													if (font = al_load_ttf_font(ACTUAL_FONT, 30, 0)) {
														ret = true;
														al_clear_to_color(al_map_rgb(0, 0, 0));
														al_draw_text(font, al_map_rgb(255, 255, 255), SCREEN_W / 2, SCREEN_H / 2, ALLEGRO_ALIGN_CENTER, "Para terminar la ejecución del juego presione 'Q' o 'Esc'");
														al_flip_display();
													}
													else {
														ret = false;
														al_destroy_display(this->Display);
														al_destroy_timer(this->Timer);
														al_destroy_bitmap(this->Background);
														al_destroy_event_queue(this->Queue);
														al_destroy_sample(this->music);
													}
												}
												else {
													ret = false;
													al_destroy_display(this->Display);
													al_destroy_timer(this->Timer);
													al_destroy_bitmap(this->Background);
													al_destroy_event_queue(this->Queue);
												}
											}
											else {
												ret = false;
												al_destroy_display(this->Display);
												al_destroy_timer(this->Timer);
												al_destroy_bitmap(this->Background);
												al_destroy_event_queue(this->Queue);
											}
										}
										else {
											al_destroy_display(this->Display);
											al_destroy_timer(this->Timer);
											al_destroy_bitmap(this->Background);
										}
									}
									else {
										ret = false;
										al_destroy_display(this->Display);
										al_destroy_timer(this->Timer);
									}
								}
								else
								{
									ret = false;
									al_destroy_display(this->Display);
								}
							}
							else
								ret = false;
						}
						else
							ret = false;
					}
					else
						ret = false;
				}
				else 
					ret = false;
			}
			else
				ret = false;
		}
		else
			ret = false;
	}

	for (int i = 0; i < 15; i++) {
		if (Userdata.WormWalk[i] = al_create_bitmap(60, 60)) {}
		else ret = false;
	}

	for (int i = 0; i < 10; i++) {
		if (Userdata.WormJump[i] = al_create_bitmap(60, 60)) {}
		else ret = false;
	}

	if (ret) {
		al_register_event_source(this->Queue, al_get_display_event_source(this->Display));
		al_register_event_source(this->Queue, al_get_timer_event_source(this->Timer));
		al_register_event_source(this->Queue, al_get_keyboard_event_source());
		al_draw_bitmap(this->WindowsBackground, 0, 0, NULL);
		al_draw_bitmap(this->Background, 0, 0, NULL);
		al_flip_display();
		al_rest(3.0);
		al_start_timer(this->Timer);  //Inicializo el Timer
		al_play_sample(music, 0.7, 0.0, 1.0, ALLEGRO_PLAYMODE_LOOP, NULL);
	}
	else {
		for (int i = 0; i < 15; i++) {
			al_destroy_bitmap(Userdata.WormWalk[i]);
		}
		for (int i = 0; i < 10; i++) {
			al_destroy_bitmap(Userdata.WormJump[i]);
		}
	}

	return ret;
}

void Allegro::SetBackground() {

	al_clear_to_color(al_map_rgb(50, 50, 50));
	al_draw_bitmap(this->WindowsBackground, 0, 0, NULL);
	al_draw_bitmap(this->Background, 0, 0, NULL);
	al_flip_display();
}

