#include "EventHandling.h" //Event type
#include "Userdata.h" //Data usage
#include "Dispatcher.h"

Dispatcher::Dispatcher()
{
}


Dispatcher::~Dispatcher()
{
}

void Dispatcher::Dispatch(Event, Userdata& Userdata) {
	//por cada event derivar a su correspondiente handler (pensar que es el handler, clase nueva? funcion de
	//dispatcher?
}
