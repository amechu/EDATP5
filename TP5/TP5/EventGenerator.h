#pragma once
#include "EventHandling.h" //Event type
#include "Userdata.h" //Data usage
#include "Allegroclass.h"
#include "EventHandling.h"

class EventGenerator
{
public:
	EventGenerator();
	~EventGenerator();
	Event fetchEvent(Userdata* Userdata, ALLEGRO_EVENT_QUEUE* Queue);
};
