#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
using namespace std;

#define MSGID "01"
#define ENDMSG ';'

class Status{
	private :
		uint8_t statusNumber; //param1
		uint8_t statusValue; //param2
		uint8_t null; //param3

	public :
		Status(uint8_t statusNumber_t, uint8_t statusValue_t);
		char* bufferize();
		void print();


};
