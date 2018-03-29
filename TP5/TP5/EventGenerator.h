#pragma once

class EventGenerator
{
public:
	EventGenerator();
	~EventGenerator();
	Event fetchEvent(Userdata&, Allegro&);
};

