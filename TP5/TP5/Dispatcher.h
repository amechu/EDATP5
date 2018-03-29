#pragma once

#include "EventHandling.h" //Event type
#include "Userdata.h" //Data usage
#include "Allegroclass.h"

class Dispatcher
{
public:
	Dispatcher();
	~Dispatcher();

	void Dispatch(Event, Userdata& Userdata, Allegro& Allegro);
};

