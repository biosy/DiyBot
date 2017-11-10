#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#define BUFFER_SIZE 50

using namespace std;	

class Sender{
	private:
		char* filePath;
		char* buffer;

	public:
		Sender(char* filePath_t);
		void* run(void* args);
		char* getBuffer();		
		void start();
		void init();
};
