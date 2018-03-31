#ifndef EVENT_GENERATOR_H
#define EVENT_GENERATOR_H

#include "EventHandling.h" //Event type
#include "Userdata.h" //Data usage
#include "EventHandling.h"

class EventGenerator
{
public:
	EventGenerator();
	~EventGenerator();
	Event fetchEvent(ALLEGRO_EVENT_QUEUE* Queue, Userdata& Userdata);
};

#endif
