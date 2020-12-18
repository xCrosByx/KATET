#pragma once
#include "living.h"
#include "empty.h"

class fox : public living 
{
public:
	fox(int r, int c, int a = 0) :age(a)
	{
		row = r;
		column = c;
	}
	state who() { return FOX; }
	living* next(world w);
protected:
	int age;
};
