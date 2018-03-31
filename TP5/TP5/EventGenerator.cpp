#include "EventGenerator.h"


EventGenerator::EventGenerator()
{
}


EventGenerator::~EventGenerator()
{
}


Event EventGenerator::fetchEvent(ALLEGRO_EVENT_QUEUE* Queue) {
	
	ALLEGRO_EVENT allegroEvent;
	Event Event;

	if (al_get_next_event(Queue, &allegroEvent)) {
		if (allegroEvent.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			Event = Event::Quit;
		else if (allegroEvent.type == ALLEGRO_EVENT_TIMER)
			Event = Event::Refresh;
		else if (allegroEvent.type == ALLEGRO_EVENT_KEY_DOWN) {
			if (allegroEvent.keyboard.keycode == ALLEGRO_KEY_W)
				Event = Event::Jump1
		}
	}
	else
		Event = Event::noEvent;


	return Event;
}