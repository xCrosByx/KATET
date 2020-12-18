#include "living.h"

void living::sums(world w, int sm[])
{
	int i, j;
	sm[EMPTY] = sm[GRASS] = sm[RABBIT] = sm[FOX] = 0;
	for (i = -1; i <= 1; ++i)
		for (j = -1; j <= 1; ++j)
			sm[w[row + i][column + j]->who()]++;
}