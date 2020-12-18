#pragma once
#include "living.h"
#include "empty.h"
class rabbit : public living 
{
public:
	rabbit(int r, int c, int a = 0) :age(a)
	{
		row = r;
		column = c;
	}
	state who() { return RABBIT; }
	living* next(world w);
protected:
	int age;
};
