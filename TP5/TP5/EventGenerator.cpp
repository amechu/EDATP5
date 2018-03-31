#include "EventGenerator.h"


EventGenerator::EventGenerator()
{
}


EventGenerator::~EventGenerator()
{
}


Event EventGenerator::fetchEvent(ALLEGRO_EVENT_QUEUE* Queue) {
	
	ALLEGRO_EVENT allegroEvent;

	Event AlEvent; //Evento creado a partir de perifericos
	Event NetEvent;	//Evento creado a partir de networking
	Event FinalEvent; //Evento creado a partir de l

	if (al_get_next_event(Queue, &allegroEvent)) {
		if (allegroEvent.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			Event = Event::Quit;
		else if (allegroEvent.type == ALLEGRO_EVENT_TIMER)
			Event = Event::Refresh;
		else if (allegroEvent.type == )
	}
	else
		Event = Event::noEvent;


	return Event;
}