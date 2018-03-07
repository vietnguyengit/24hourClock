#include "counter.h"

counter::counter() : second(0) {

}

void counter::tick() {
	second += 1;
}

void counter::reset() {
	second = 0;
}

int counter::value() const {
	return second;
}