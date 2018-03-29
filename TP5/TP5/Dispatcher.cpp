#include "EventHandling.h" //Event type
#include "Userdata.h" //Data usage
#include "Allegroclass.h"
#include "Dispatcher.h"

Dispatcher::Dispatcher()
{
}


Dispatcher::~Dispatcher()
{
}

void Dispatcher::Dispatch(Event, Userdata& Userdata, Allegro& Allegro) {
	//por cada event derivar a su correspondiente handler (pensar que es el handler, clase nueva? funcion de
	//dispatcher?
}
