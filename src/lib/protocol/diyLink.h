#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class DiyLink{
	private:
		uint8_t msgid;
		uint8_t endmsg;
		uint16_t payload1;
		uint16_t payload2;
		uint16_t payload3;

	public:
		char* bufferize();
		DiyLink(uint8_t msgid_t, uint8_t endmsg_t, uint16_t payload1_t, uint16_t payload2_t, uint16_t payload3_t);
		void print();
};
