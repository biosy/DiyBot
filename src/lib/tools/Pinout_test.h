#include <iostream>

using namespace std;

class Pinout_test{
	private: 
		int states[2][20];
		char* gpioPath;
		char* serialPath;
		

	public:

		void getStates();
		void activateGpios();
		void activateGpio(int index);
};
