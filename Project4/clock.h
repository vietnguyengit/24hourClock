#ifndef CLOCK_H_
#define CLOCK_H_
#include "counter.h"

class clock {
private:
	counter secondCounter;
	counter minuteCounter;
	counter hourCounter;
public:
	void clockwork();
	void displayclock();
};

#endif CLOCK_H_H