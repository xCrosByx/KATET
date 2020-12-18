#pragma once
#include "living.h"
#include "empty.h"

class grass : public living 
{
public:
	grass(int r, int c)
	{
		row = r;
		column = c;
	}
	state who() { return GRASS; }
	living* next(world w);
};