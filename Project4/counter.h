#ifndef COUNTER_H_
#define COUNTER_H_

class counter {
private:
	unsigned int second;
public:
	explicit counter();
	void tick();
	void reset();
	int value() const;
};

#endif COUNTER_H_