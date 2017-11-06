#include <iostream>
#include "goto.h"
#include "diyLink.h"
#include "status.h"

using namespace std;

int main(){

	DiyLink* d = new DiyLink(200,00,0010,0110, 0030);
	d->print();
	return 0;
}

