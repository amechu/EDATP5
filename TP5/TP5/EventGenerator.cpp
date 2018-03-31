#include "EventGenerator.h"


EventGenerator::EventGenerator()
{
}


EventGenerator::~EventGenerator()
{
}


Event EventGenerator::fetchEvent(Userdata& Userdata, ALLEGRO_EVENT_QUEUE* Queue) {
	return Event::Jump1;
}