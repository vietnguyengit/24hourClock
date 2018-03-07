#include "clock.h"
#include <iostream>
#include <iomanip>
#include <thread>

using namespace std;

void clock::clockwork() {
	secondCounter.tick();
	this_thread::sleep_for(chrono::seconds(1));

	if (secondCounter.value() >= 60) {
		minuteCounter.tick();
		secondCounter.reset();
	}

	if (minuteCounter.value() >= 60) {
		hourCounter.tick();
		minuteCounter.reset();
	}

	if (hourCounter.value() >= 24) {
		hourCounter.reset();
	}
}

void clock::displayclock() {
	while (true) {
		clockwork();
		system("cls");
		cout << setw(2) << setfill('0') << hourCounter.value() << ":" << setw(2) << setfill('0') << minuteCounter.value() << ":" << setw(2) << setfill('0') << secondCounter.value() << endl;
	}
}