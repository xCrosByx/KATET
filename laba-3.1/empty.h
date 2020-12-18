#pragma once

#include "living.h"
#include "fox.h"
#include "grass.h"
#include "rabbit.h"

class empty : public living 
{
public:
	empty(int r, int c)
	{
		row = r;
		column = c;
	}
	state who() { return EMPTY; }
	living* next(world w);
};