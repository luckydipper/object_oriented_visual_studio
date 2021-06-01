#pragma once
class Counter {
	int value;
public:
	Counter();
	void increment();
	void decrement();
	int get() const;
};
