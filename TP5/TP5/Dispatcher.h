#pragma once
class Dispatcher
{
public:
	Dispatcher();
	~Dispatcher();

	void Dispatch(Event, Userdata& Userdata);
};

