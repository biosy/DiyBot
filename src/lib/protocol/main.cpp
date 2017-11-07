#include <iostream>
#include "goto.h"
#include "diyLink.h"
#include "status.h"

using namespace std;

int main(){

	
	DiyLink* d = new DiyLink(200,00,0010,0110, 0030);
	d->print();

	uint8_t x = 0x01;
	uint8_t y = 0x02;

	Status* status= new Status(x,y);
	status->bufferize();
	return 0;
}

