#include "status.h"

Status::Status(uint8_t statusNumber_t, uint8_t statusValue_t): statusNumber(statusNumber_t), statusValue(statusValue_t){

}

char* Status::bufferize(){
	char* buffer = (char*)malloc(20*sizeof(char));
	char* statusNumber_s = (char*)malloc(20*sizeof(char));
	char* statusValue_s = (char*)malloc(20*sizeof(char));

	sprintf(statusNumber_s, "%02x", statusNumber);
	sprintf(statusValue_s, "%02x", statusValue);

	strcpy(buffer,"");
	strcat(buffer, MSGID);
	strcat(buffer, statusNumber_s);
	strcat(buffer, statusValue_s);

	return buffer;
}
