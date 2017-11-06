#include "status.h"


/*
* ENUM : 
*
*
*	-0000 : bool internet
*	-0001 : bool camera
*	-0002 : int gpioNumber
*	-0003 : etc ...
*
*/

class Status{
	private :
		int statusNumber;
		int statusValue;

	public : 
		char* bufferize();		


}
