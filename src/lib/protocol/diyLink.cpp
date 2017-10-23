#include "diyLink.h"

DiyLink::DiyLink(uint8_t msgid_t, uint8_t endmsg_t, uint16_t payload1_t, uint16_t payload2_t, uint16_t payload3_t): msgid(msgid_t), endmsg(endmsg_t), payload1(payload1_t), payload2(payload2_t), payload3(payload3_t){

}

char* DiyLink::bufferize(){
	char* buffer = (char*)malloc(16*sizeof(char));
	return buffer;

}
