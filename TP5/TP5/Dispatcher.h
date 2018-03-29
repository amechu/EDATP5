#pragma once

#include "EventHandling.h" //Event type
#include "Userdata.h" //Data usage

class Dispatcher
{
public:
	Dispatcher();
	~Dispatcher();

	void Dispatch(Event, Userdata& Userdata);
};

