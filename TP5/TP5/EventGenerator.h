#pragma once
#include "EventHandling.h" //Event type
#include "Userdata.h" //Data usage
#include "Keys.h"
#include "EventHandling.h"

class EventGenerator
{
public:
	EventGenerator();
	~EventGenerator();
	Event fetchEvent(ALLEGRO_EVENT_QUEUE* Queue);
};
